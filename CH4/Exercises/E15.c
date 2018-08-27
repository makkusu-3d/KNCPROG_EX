/* Give the values of i and j after each of the following expression
 * statements has been executed. (Assume that i has the value 1
 * and j has the value 2)
 */

#include <stdio.h>

int i,j;

int main(void)
{
    i = 1; j = 2;
    i += j;
    printf("%d %d\n", i, j);
    // output: 3 2

    i = 1; j = 2;
    i--;
    printf("%d %d\n", i, j);
    // output: 0 2

    i = 1; j = 2;
    i * j / i;
    printf("%d %d\n", i, j);
    // output: 1 2

    i = 1; j = 2;
    i % ++j;
    printf("%d %d", i, j);
    // output: 1 3

    return 0;
}
