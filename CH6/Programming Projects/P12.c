/* Modify Programming Project 11 so that the program continues adding
 * terms until the current term becomes less than epsilon, where
 * epsilon is a small (floating-point) number entered by the user.
 *

 */

#include <stdio.h>

int n, i;
float e_sum = 0.00f, fact = 1.00f, epsilon;

int main(void)
{
    printf("Program to evaluate the constant e\n expressed as a infinite series\n");
    printf("1 + 1/1! + 1/2! + 1/3! + ... + 1/n!\n");
    printf("Enter a float value for epsilon: ");
    scanf("%f", &epsilon);

    for (i = 1 ;; i++){
        fact *= i;
        if ( (1/fact) < epsilon){
            break;
        } else
            e_sum += 1/fact;
    }
    printf("Answer: %f", e_sum);
}
