/**
 * (a) Write a program that reads a message, then checks
 *     whether it's a palindrome ( the letters in the
 *     message are the same from left to right as from
 *     right to left):
 *
 *  Enter a message: He lived as a devil, eh?
 *  Palindrome
 *
 *  Enter a message: Madam, I am Adam
 *  Not a palindrome
 *
 *  Ignore all characters that aren't letters. Use integer
 *  variables to keep track of positions in the array.
 *
 *  (b) Revise the program to use pointers instead of
 *      integers to keep track of position in the array
 */

/** (a)

// Preprocessing Directives
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// External Variables
char message_array[];
int array_length;


// Function Prototypes
void display_message(void);
void read_input(int *);
bool if_palindrone(int array_length, char message_array[array_length]);


// Function Definitions
int main(void)
{
    display_message();
    read_input(&array_length);

    if (if_palindrone(array_length, message_array)) {
        printf("Palindrone");
    } else {
        printf("Not a Palindrone");
    }

    return 0;
}

void display_message(void)
{
    printf("Enter a message: ");
}

void read_input(int *p)
{
    char ch;
    int i = 0;
    while ((ch = toupper(getchar())) != '\n')
    {
        if (ch >= 65 && ch <= 90) {
            message_array[i++] = ch;
        }
    }
    *p = i;
}

bool if_palindrone(int array_length, char message_array[array_length])
{
    int i = 0;
    int j = array_length - 1;

    while (i < array_length)
    {
        if (message_array[i] != message_array[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;

*/

// Preprocessing Directives
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// External Variables
char message_array[];
char *end_array_address;


// Function Prototypes
void display_message(void);
void read_input(char *);
bool if_palindrone(char message_array[]);


// Function Definitions
int main(void)
{
    display_message();
    read_input(message_array);

    if (if_palindrone(message_array)) {
        printf("Palindrone");
    } else {
        printf("Not a Palindrone");
    }

    return 0;
}

void display_message(void)
{
    printf("Enter a message: \n");
}

void read_input(char *a)
{
    char ch;
    while ((ch = toupper(getchar())) != '\n')
    {
        if (ch >= 65 && ch <= 90) {
            *a++ = ch;
            end_array_address = a;
        }
    }

}

bool if_palindrone(char message_array[])
{

    char *ptr = &message_array[0];
    char *ptr2 = end_array_address;

    ptr2--;

    while (ptr < end_array_address) // This line works fine
    {

        if (*ptr != *ptr2) {
            return false;
        }

        ptr++;
        ptr2--;
    }

    return true;
}
