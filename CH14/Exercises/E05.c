/**
 * Let TOUPPER be the following macro:
 *
 * #define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
 *
 * Let s be a string and let i be an int variable. Show
 * the output produced by each of the following program
 * fragments.
 *
 * (a) strcpy(s, "abcd");
 *     i = 0;
 *     putchar(TOUPPER(s[++i]));
 *
 * (b) strcpy(s, "0123");
 *     i = 0;
 *     putchar(TOUPPER(s[++i]));
 *
 * Answers:
 * (a) Output --> D
 * (b) Output --> 2
 */

// Preprocessing Directives
#include <stdio.h>

#include <string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

// External Variables
int i;
char s[5] = {};

// Function Prototypes

// Function Definitions
int main(void)
{
    strcpy(s, "abcd");
    i = 0;
    putchar(TOUPPER(s[++i]));
    // #define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
    //         TOUPPER(s[++i]) ('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i]))
    //                                  i=1       i=2           i=3

    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));
    // #define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
    //         TOUPPER(s[++i]) ('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(s[++i]))
    //                                  i=1                                      i=2

    return 0;
}
