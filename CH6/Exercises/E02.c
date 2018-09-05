/* What output does the following program fragment produce? */

#include <stdio.h>

// Assuming i is an int
int i;

int main(void)
{
    i = 9383;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);
    // Output produced:
    // 9383 938 93 9
}
