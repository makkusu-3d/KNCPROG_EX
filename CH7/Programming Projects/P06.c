/* Write a program that prints the values of
 * sizeof(int), sizeof(short), sizeof(long),
 * sizeof(float), sizeof(double) and
 * sizeof(long double).
 *
 */

#include <stdio.h>

int main(void)
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));

    return 0;
}
