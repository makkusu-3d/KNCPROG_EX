/** Maintains a parts database (array version) */

/**
 * Modify the inventory.c program of Section 16.3 so that
 * the inventory array is allocated dynamically and later
 * reallocated when it fills up. Use malloc initially to
 * allocated enough space for an array of 10 part structures.
 * When the array has no more room for new parts, use
 * realloc to double its size. Repeat the doubling step
 * each time the array becomes full.
 */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};

int num_parts = 0;  /* number of parts currently stored */

int max_malloc = 10;

int find_part(struct part *ptr, int number);
struct part *insert(struct part *);
void search(struct part *);
void update(struct part *);
void print(struct part *);

/************************************************************
 * main: Prompts the user to enter an operation code,       *
 *       then calls a function to perform the requested     *
 *       action. Repeats until the user enters the          *
 *       command 'q'. Prints an error message if the user   *
 *       enters an illegal code.                            *
 ************************************************************/
int main(void)
{
    char code;

    struct part *ptr = malloc(10 * sizeof(struct part));

    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')   /* skips to end of line */
            ;
        switch (code) {
            case 'i': ptr = insert(ptr);
                      // printf("ptr after insert: %d", (ptr+0)->number);
                      break;
            case 's': search(ptr);
                      break;
            case 'u': update(ptr);
                      break;
            case 'p': print(ptr);
                      break;
            case 'q': return 0;
            default: printf("Illegal code\n");
        }
        printf("\n");
    }
}

/************************************************************
 * find_part: Looks up a part number in the inventory       *
 *            array. Returns the array index if the part    *
 *            number is found; otherwise, returns -1.       *
 ************************************************************/
 int find_part(struct part *ptr, int number)
 {
     int i;

     for(i = 0; i < num_parts; i++)
        if ((ptr+i)->number == number)
            return i;
     return -1;
 }

/************************************************************
 * insert: Prompts the user for information about a new     *
 *         part and then inserts the part into the          *
 *         database. Prints an error message and returns    *
 *         prematurely if the part already exists or the    *
 *         database is full.                                *
 ************************************************************/
 struct part *insert(struct part *ptr)
 {
     int part_number;

     if (num_parts == max_malloc) {
        max_malloc = max_malloc * 2;
        ptr = realloc(ptr, max_malloc * sizeof(struct part));
        printf("\nStruct space increased %d", max_malloc);
     }

     printf("Enter part number: ");
     scanf("%d",&part_number);

     if (find_part(ptr, part_number) >= 0) {
        printf("Part already exists.\n");
        return ptr;
     }

     (ptr+num_parts)->number = part_number;
     printf("Enter part name: ");
     read_line((ptr+num_parts)->name, NAME_LEN);
     printf("Enter quantity on hand: ");
     scanf("%d", &((ptr+num_parts)->on_hand));
     num_parts++;

     return ptr;
 }

/************************************************************
 * search: Prompts the user to enter a part number, then    *
 *         looks up the part in the database. If the part   *
 *         exists, prints the name and quantity on hand;    *
 *         if not, prints an error message.                 *
 ************************************************************/
void search(struct part *ptr)
{
    int i, number;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(ptr, number);
    if (i >= 0) {
        printf("Part name: %s\n", (ptr+i)->name);
        printf("Quantity on hand: %d\n", (ptr+i)->on_hand);
    } else
      printf("Part not found.\n");
}

/************************************************************
 * update: Prompts the user to enter a part number.         *
 *         Prints an error message if the part doesn't      *
 *         exist; otherwise, prompts the user to enter      *
 *         change in quantity on hand and update the        *
 *         database.                                        *
 ************************************************************/
void update(struct part *ptr)
{
    int i, number, change;

    printf("Enter part number: ");
    scanf("%d", &number);
    i = find_part(ptr, number);
    if (i >= 0) {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change);
        (ptr+num_parts)->on_hand += change;
    } else {
      printf("Part not found.\n");
    }
}

/************************************************************
 * print: Prints a listing of all parts in the database,    *
 *        showing the part number, part name, and           *
 *        quantity on hand. Parts are printed in the order  *
 *        order in which they were entered into the         *
 *        database.                                         *
 ************************************************************/
void print(struct part *ptr)
{
    int i;

    printf("Part Number   Part Name                 "
           "Quantity on Hand\n");

    for (i = 0; i < num_parts; i++)
        printf("%7d     %-25s%11d\n", (ptr+i)->number,
               (ptr+i)->name, (ptr+i)->on_hand);
}
