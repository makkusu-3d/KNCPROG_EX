/* The value of the mathematical constant e can be expressed as in infinite
 * series:
 *
 * e = 1 + 1/1! + 1/2! + 1/3! + . . .
 *
 * Write a program that approximates e by computing the value of
 *
 * 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 *
 * Where n is an integer entered by the user
 *
 */

#include <stdio.h>

int n, i;
float e_sum = 0.00f, fact = 1.00f;

int main(void)
{
    printf("Program to evaluate the constant e\n expressed as a infinite series\n");
    printf("1 + 1/1! + 1/2! + 1/3! + ... + 1/n!\n");
    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        fact *= i;
        e_sum += 1/fact;

    }

    printf("Answer: %f", e_sum); 
}
