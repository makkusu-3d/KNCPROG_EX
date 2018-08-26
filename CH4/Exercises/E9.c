/* Show the output produced by each of the following program fragments
 * assume that i, j, and k are int variables.
 */

#include <stdio.h>

int i,j,k;

int main(void)
{
    // (a)
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);
    // output: 63 8

    // (b)
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);
    // output: 3 2 1

    // (c)
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);
    // output: 2 -1 3

    // (d)
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d", i, j, k);
    // output: 0 0 0

    return 0;
}
