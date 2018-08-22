/* A Program that asks for the value of x and displays
 * the value of 3x^5+2x^4+5x^3-x^2+7x-6
 * which is simplified using Horner's rule as
 * ((((3x+2)x-5)x-1)x+7)x-6
 */

#include <stdio.h>

float x;

int main(void)
{
    printf("Enter a value for x: ");
    scanf("%f", &x);

    x = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

    printf("Answer for x: %f",x);

    return 0;
}
