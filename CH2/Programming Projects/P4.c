/* Program that asks the user to enter a dollar and cents amount
 * and then displays the amount with 5% tax added
 */

#include <stdio.h>
#define TAX 1.05

float amount;

int main(void)
{
    printf("Enter an amount: ");
    scanf("%f", &amount);

    amount *= TAX;

    printf("With tax added: $%0.2f", amount);

    return 0;
}
