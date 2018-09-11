/* Programming Project 8 in Chapter 2 asked you to write a program that calculates
 * the remaining balance on a loan after the first, second, and third monthly
 * payments. Modify the program so that it also asks the user to enter the number
 * of payments and then displays the balance remaining after each of these payments
 *
 */

#include <stdio.h>

float amount, interest, m_payment;
int num_pay, i;

int main(void)
{
    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    interest = ((interest / 12) + 100) / 100;

    printf("Enter monthly payment: ");
    scanf("%f", &m_payment);

    printf("Enter the number of payments: ");
    scanf("%d", &num_pay);

    for(i = 0; i < num_pay; i++){

        amount = amount * interest - m_payment;
        printf("Balance remaining for month %d payment: %f\n", i + 1, amount);
    }

    return 0;
}
