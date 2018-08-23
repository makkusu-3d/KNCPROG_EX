/* Program that calculates the remaining balance on
 * a loan after the first, second and third monthly
 * payments
 */

#include <stdio.h>

float amount, interest, m_payment;

int main(void)
{
    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    interest = ((interest / 12) + 100) / 100;

    printf("Enter monthly payment: ");
    scanf("%f", &m_payment);

    amount = amount * interest - m_payment;
    printf("Balance remaining after first payment: $%.2f\n", amount);

    amount = amount * interest - m_payment;
    printf("Balance remaining after second payment: $%.2f\n", amount);

    amount = amount * interest - m_payment;
    printf("Balance remaining after third payment: $%.2f", amount);

    return 0;
}
