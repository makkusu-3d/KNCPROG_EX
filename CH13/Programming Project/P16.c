/**
 * Modify Programming Project 1 from Chapter 12 so that
 * it includes the following function:
 *
 * void reverse(char *message);
 *
 * The function reverses the string pointed to by message.
 * Hint: Use two pointers, one initially pointing to the
 * first character of the string and the other initially
 * pointing to the last character. Have the function
 * reverse these characters and then move the pointers
 * toward each other, repeating the process until the
 * pointers meet.
 */

// Preprocessing Directives
#include <stdio.h>

// External Variables
char message[50] = {};
char *p;
int message_array_size = 0;

// Function Prototypes
void read_message(void);
void reverse(char *);

// Function Definitions
int main(void)
{
    printf("Enter a message: ");
    read_message();
    reverse(message);

    return 0;
}

void read_message(void)
{
    int i = 0;
    char ch;

    while ((ch = getchar()) != '\n')
    {
        message[i] =  ch;
        p = &message[i];
        i++;
    }
}

void reverse(char *message)
{
    char *i, *j = &message[0];

    for (i = p; i >= j; i--) {
        printf("%c", *i);
    }
}
