/* Modify the sum2.c program of Section 7.1 to sum
 * a series of double values.
 */

/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void)
{
    double n, sum = 0.0;

    printf("This program sums a series of float of type double.\n");

    printf("Enter floats (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0.0){
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);

    return 0;
}
