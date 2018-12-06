/**
 * Write a function named censor that modifies a string
 * by replacing every occurrence of foo by xxx. for
 * example, the string "food fool" would be become
 * "xxxd xxxl". Make the function as short as possible
 * without sacrificing clarity.
 */

// Preprocessing Directives
#include <stdio.h>

// External Variables
char str[] = "food fool";

// Function Prototypes
void censor(char *str);
void print_string(void);

// Function Definitions
int main(void)
{
    censor(str);
    print_string();

    return 0;
}

void censor(char str[])
{

    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'f' && str[i+1] == 'o' && str[i+2] == 'o') {
            str[i]   = 'x';
            str[i+1] = 'x';
            str[i+2] = 'x';
        }
    }
}

 void print_string(void)
{
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}
