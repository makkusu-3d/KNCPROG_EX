/* Write a program that uses Newton's method to
 * compute the square root of a positive floating
 * point number:
 *
 * Enter a positive number: 3
 * Square root: 1.73205
 *
 * Let x be the number entered by the user. Newton's
 * method requires an initial guess y for the square
 * root of x (we'll use y = 1). Successive guesses
 * are found by computing the average of y and x/y.
 * .....
 */

#include <stdio.h>
#include <math.h>

double x, y = 1, old_y, divided;

int main(void)
{
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    while(fabs(old_y - y) > 0.00001){

        old_y = y;
        divided = x / y;
        y = (divided + y) / 2;

    }

    printf("Square root: %.5lf", y);

    return 0;
}
