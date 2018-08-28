/* Write a program that reads an integer entered by the user
 * and displays it in octal (base 8)
 *
 * Enter a number between 0 and 32767: 1953
 * In octal, your number is: 03641
 *
 * The output should be displayed using five digits, even if
 * fewer digits are sufficient. Hint: to convert the number
 * to octal, first divide it by 8; the remainder is the last
 * digit of the octal number (1, in this case). Then divide
 * the original number by 8 and repeat the process to arrive
 * at the next-to-last digit.
 */

#include <stdio.h>

int i, d_1, d_2, d_3, d_4, d_5;

int main(void)
{
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);

    d_1 = i % 8;
    i /= 8;
    d_2 = i % 8;
    i /= 8;
    d_3 = i % 8;
    i /= 8;
    d_4 = i % 8;
    i /= 8;
    d_5 = i % 8;

    printf("In octal, your number is: %d%d%d%d%d", d_5, d_4, d_3, d_2, d_1);

    return 0;
}
