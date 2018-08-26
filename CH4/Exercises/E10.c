/* Show the output produced by each of the following program
 * fragments. Assume that i and j are int variables
 */

#include <stdio.h>

int i, j;

int main(void)
{
    // (a)
    i = 6;
    j = i += i;
    printf("%d %d\n", i, j);
    // output: 12 12

    // (b)
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);
    // output: 3 4

    // (c)
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);
    // output: 2 8

    // (d)
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d", i, j);
    // output: 6 9

    return 0;
}
