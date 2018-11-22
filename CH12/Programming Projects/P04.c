/**
 * Simplify Programming Project 2(b) by taking advantage
 * of the fact that an array name can be used as a pointer
 */

// Preprocessing Directives
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// External Variables
char message_array[50];
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

    char *ptr2 = end_array_address;

    ptr2--;

        // Using the array as a pointer for the test condition
        // The test condition is comparing the address of message_array
        // with the address of end_array_address
        //  |
        //  v
    while (message_array < end_array_address) // This line works fine
    {

        // Since message array is being used as a pointer
        // the indirection operator is used to access
        // to the pointed element
        //   |
        //   v
        if (*message_array != *ptr2) {
            return false;
        }

        // The message_array address is being incremented
        //  |
        //  v
        message_array++;
        ptr2--;
    }

    return true;
