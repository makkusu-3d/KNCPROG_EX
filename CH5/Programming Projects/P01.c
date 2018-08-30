/* Write a program that calculates how many digits a number contains
 *
 * Enter a number: 374
 * The number 374 has 3 digits
 *
 * You may assume that the number has no more than four digits.
 * Hint: Use if statements to test the number. For example, if
 * the number is between 0 and 9, it has one digit. If the number
 * is between 10 and 99, it has two digits.
 *
 */

#include <stdio.h>
#include <stdbool.h>

int num, digit_count;
bool Flag = 1;

int main(void)
{
    printf("Enter a number: ");
    scanf("%d", &num);

    // Assuming a number between 0 - 9999
    if (num >= 0 && num <= 9 )
        digit_count = 1;
    else if (num <= 99)
        digit_count = 2;
    else if (num <= 999)
        digit_count = 3;
    else if (num <= 9999)
        digit_count = 4;
    else
        Flag = 0;
        
    if(Flag)
        printf("The number %d has %d digits", num, digit_count);
    else
        printf("Number out of range");

    return 0;
}
