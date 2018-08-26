/* Show the output produced by each of the following program fragments.
 * Assume that i,j and k are int variables
 */

#include <stdio.h>

int i,j,k;

int main(void)
{
    i = 5; j = 3;
    printf("%d %d\n", i / j, i % j);
    // Output: 1 2

    i = 2; j = 3;
    printf("%d\n", (i + 10) % j);
    // Output: 0

    i = 7; j = 8; k = 9;
    printf("%d\n", (i + 10) % k / j);
    // Output: 1

    return 0;
}
