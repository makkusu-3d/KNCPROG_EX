/* Write a program that asks the user to fraction, then reduces the
 * fraction to lowest terms:
 *
 * Enter a fraction: 6/12
 * In lowest terms: 1/2
 *
 * Hint: To reduce a fraction to lowest terms, first compute the GCD
 * of the numerator and denominator. Then divide both the numerator
 * and denominator by the GCD.
 *
 */

#include <stdio.h>>

int m, n, r, num, den;

int main(void)
{
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    num = m;
    den = n;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d", (num / m) ,(den / m));

    return 0;
}
