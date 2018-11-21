/**
 * Simplify Programming Project 1(b) by taking advantage of
 * the fact that an array name can be used as a pointer
 */

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
    char *i;
                  // Using an array as a pointer
                  // |
                  // v
    for (i = p; i >= message_array; i--) {
        printf("%c", *i);
    }
}

