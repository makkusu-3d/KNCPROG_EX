/* Program that asks the user to enter a U.S. dollar
 * and then shows how to pay that amount using the smallest
 * number of $20, $10, $5 and $1 bills
 */

#include <stdio.h>

int amount, x;

int main(void)
{
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    x = amount / 20;
    printf("$20 bills: %d\n", x);
    amount = amount - x*20;

    x = amount / 10;
    printf("$10 bills: %d\n", x);
    amount = amount - x*10;

    x = amount / 5;
    printf("$5  bills: %d\n", x);
    amount = amount - x*5;

    x = amount / 1;
    printf("$1  bills: %d\n", x);

    return 0;
}
