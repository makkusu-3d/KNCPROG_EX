/**
 * Modify Programming Project 11 from Chapter 7 so that it
 * includes the following function:
 *
 * void reverse_name(char *name);
 *
 * The function expects name to point to a string containing
 * a first name followed by a last name. It modifies the
 * string so that the last name comes first, followed
 * by a comma, a space, the first initial, and a period.
 * The original string may contain extra spaces before
 * the first name, between the first and last names,
 * and after the last name.
 */

 // Preprocessing Directives
#include <stdio.h>

// External Variables
char *name = "Nikola Tesla";

// Function Prototypes
void reverse_name(char *name);

// Function Definitions
int main(void)
{
    reverse_name(name);

    return 0;
}

void reverse_name(char *name)
{
    int i;
    char first_initial = name[0];

    for (i = 1; name[i] != ' '; i++) {;}
    for (;name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf(", %c", first_initial);
}
