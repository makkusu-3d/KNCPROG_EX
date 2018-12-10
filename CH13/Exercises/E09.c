/**
 * What will be the value of the string s1 after the
 * following statements have been executed?
 *
 * strcpy(s1, "computer");
 * strcpy(s2, "science);
 * if (strcmp(s1, s2) < 0)
 *     strcat(s1, s2);
 * else
 *     strcat(s2, s1);
 * s1[strlen(s1)-6] = '\0';
 *
 * After statements have been executed s1 = "computer"
 */

// Preprocessing Directives
#include <stdio.h>
#include <string.h>

// External Variables
char s1[20] = "";
char s2[20] = "";

// Function Prototypes

// Function Definitions
int main(void)
{
    strcpy(s1, "computer");
    strcpy(s2, "science");
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);
    else
        strcat(s2, s1);
    s1[strlen(s1)-6] = '\0';

    printf("%s", s1);

    return 0;
}
