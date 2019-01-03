/**
 * Modify Programming Project 2 from Chapter 12 so that
 * it includes the following function:
 *
 * bool is_palindrone(const char *message);
 *
 * The function returns true if the string pointed to
 * by message is a palindrone
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
bool is_palindrone(char *message_array);


// Function Definitions
int main(void)
{
    display_message();
    read_input(message_array);

    if (is_palindrone(message_array)) {
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

bool is_palindrone(char *message_array)
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
