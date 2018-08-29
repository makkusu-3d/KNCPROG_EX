/* The following program fragments illustrate the logical operators
 * Show the output produced by each, assuming that i, j and k
 * are int variables.
 */

#include <stdio.h>

int i, j, k;

int main(void)
{
    //(a)
    i = 10; j = 5;
    printf("%d\n", !i < j);
    // Output: 1

    //(b)
    i = 2; j = 1;
    printf("%d\n", !!i + !j);
    // Output: 1

    //(c)
    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);
    // Output: 1

    //(d)
    i = 1; j = 2; k = 3;
    printf("%d", i < j || k);
    // Output: 1

    return 0;
}
