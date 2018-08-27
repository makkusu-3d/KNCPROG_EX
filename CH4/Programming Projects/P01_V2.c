/* Write a program that asks the user to enter a two-digit number,
 * then prints the number with its digits reversed. A session with
 * the program should have the following appearance:
 *
 * Enter a two-digit number: 28
 * The reversal is: 82
 *
 * Read the number using %d, then break it into two digits. Hint: If
 * n is an integer, then n % 10 is the last digit in n and n / 10
 * is n with the last digit removed
 */

#include <stdio.h>

int i,j;

int main(void)
{
    printf("Enter a two-digit number: ");
    scanf("%d", &i);
    
    // Using the method described by the hint

    j = i % 10;
    i = i / 10;

    printf("The reversal is: %d%d", j, i);

    return 0;
}

