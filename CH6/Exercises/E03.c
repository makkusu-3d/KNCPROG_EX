/* What output does the following for statement produce? */

#include <stdio.h>

int i, j;

int main(void)
{
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
    // Output:
    // 5 4 3 2
    // j > 0 becomes false one loop before i due to the
    // j being one less than i
}
