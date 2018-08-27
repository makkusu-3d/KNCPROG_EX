/* Rewrite the program in Programming Project 2 so that it prints
 * the reversal of a three-digit number without using arithmetic
 * to split the number into digits.
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
