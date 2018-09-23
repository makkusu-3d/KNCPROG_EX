/* Write a program that computes the factorial of
 * positive integer:
 *
 * Enter a positive integer: 6
 * Factorial of 6: 720
 *
 */

#include <stdio.h>

int i, n;

long double factorial = 1.0;

int main(void)
{
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        factorial *= (long double) i;
    }

    printf("Factorial of %d: %g", n, factorial);
}

/* (a) Use a short variable to store the value of
 *     the factorial. What is the largest value
 *     for which the program correctly prints
 *     the factorial of n?
 *
 *     The largest value of n that correctly prints
 *     the value of the factorial is 7. This is
 *     because the largest value short can hold
 *     is 32767. 7! is 5040 and 8! is 40320.
 *     40320 > 32767 therefore overflow will occur.
 *
 * (b) Repeat part(a), using an int variable
 *     instead
 *
 *     The largest possible value for n is 16
 *     The largest value for an int is 2,147,483,647
 *     Factorial with n of 16 is 2004189184 with n
 *     of 17 there is overflow.
 *
 * (c) Repeat part(a), using a long variable
 *     instead
 *
 *     This will end up the same as the int since
 *     the bit size for the IDE is 32bit. Long size
 *     in a 32 bit system is 2,147,483,647.
 *
 * (d) Repeat part (a), using a long long variable
 *     instead.
 *
 *     This will end up the same as the int since
 *     the bit size for the IDE is 32bit.
 *
 * (e) Repeat part (a), using a float variable
 *     instead.
 *
 *     The maximum allowable n value is 34 for which the
 *     factorial has a value of 2.54 x 10^34. 35 would
 *     cause overflow.
 *
 * (f) Repeat part (a), using a double variable
 *     instead.
 *
 *     The maximum allowable n value is 170 for which the
 *     factorial has a value of 7.26 x 10^308. 171
 *     causes overflow.
 *
 * (g) Repeat part (a), using a long double variable
 *     instead.
 *
 *     Cant get long double to work, possibly a problem
 *     with the compiler
 */

