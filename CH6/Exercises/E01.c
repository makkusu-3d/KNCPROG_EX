/* What output does the following program fragment produce? */

#include <stdio.h>

int main(void)
{
    i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }
    // Printed output:
    // 1 2 4 8 16 32 64 128
}

