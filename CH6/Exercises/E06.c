/* Translate the program fragment of Exercise 1 into a single for statement */

#include <stdio.h>

int i;

int main(void)
{
    for(i = 1; i <= 128; i *= 2)
        printf("%d ", i);

    // Testing versus original while loop

    i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }

    // Both outputted 1 2 4 8 16 32 64 128

    return 0;
}
