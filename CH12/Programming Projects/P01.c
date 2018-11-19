/**
 * (a) Write a program that reads a message, then prints the
 * reversal of the message:
 *
 * Enter a message: Don't get mad, get even.
 * Reversal is:  .neve teg, dam teg t'noD
 *
 * Hint: Read the message one character at a time (using getchar)
 * and store the characters in an array. Stop reading when
 * the array is full or the character read '\n'.
 *
 * (b) Revise the program to use a pointer instead of an
 *     integer to keep track of the current position of
 *     the array.
 */

/** (a)
// Preprocessing Directives
#include <stdio.h>

// External Variables
char message_array[];
int message_array_size = 0;

// Function Prototypes
void read_message(void);
void print_reverse_message(void);

// Function Definitions
int main(void)
{
    printf("Enter a message: ");
    read_message();
    print_reverse_message();

    return 0;
}

void read_message(void)
{
    int i = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        message_array[i] =  ch;
        i++;
        message_array_size++;
    }
}

void print_reverse_message(void)
{
    int i;

    for (i = message_array_size - 1; i >= 0; i--) {
        printf("%c", message_array[i]);
    }
}
*/

/** (b) */

// Preprocessing Directives
#include <stdio.h>

// External Variables
char message_array[50] = {};
char *p;
int message_array_size = 0;

// Function Prototypes
void read_message(void);
void print_reverse_message(void);

// Function Definitions
int main(void)
{
    printf("Enter a message: ");
    read_message();
    print_reverse_message();

    return 0;
}

void read_message(void)
{
    int i = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        message_array[i] =  ch;
        p = &message_array[i];
        i++;
    }
}

void print_reverse_message(void)
{
    char *i, *j = &message_array[0];

    for (i = p; i >= j; i--) {
        printf("%c", *i);
    }
}
