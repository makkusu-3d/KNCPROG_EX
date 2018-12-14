/**
 * What does the following program print?
 */

#include <stdio.h>

int main(void)
{
    char s[] = "Hsjodi", *p;

    for (p = s; *p; p++)
        --*p;
    puts(s);
    return 0;
}

// Predicted output:
// Grinch

// Actual output:
// Grinch

// The for loop decrements every char character
// value by one changing the character output
// to the letter before the original letter
