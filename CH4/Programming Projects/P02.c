/* Extend the program in Programming Project 1 to handle three
 * digit numbers.
 */

#include <stdio.h>

int i, j, k;

int main(void)
{
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);

    printf("The reversal is: %d%d%d", k, j, i);

    return 0;
}
