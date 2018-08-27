/* Extend the program in Programming Project 1 to handle three
 * digit numbers
 */

#include <stdio.h>

int i,j,k;

int main(void)
{
    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    // Using the method described by the hint

    k = i % 10;
    j = i % 100 / 10;
    i = i / 100;

    printf("The reversal is: %d%d%d", k, j, i);

    return 0;
}
