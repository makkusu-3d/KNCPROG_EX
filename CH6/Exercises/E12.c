/* The following "prime-testing" loop appeared in Section 6.4 as an example:
 *
 * for (d = 2; d < n; d++)
 *      if (n % d == 0)
 *          break;
 *
 * This loop isn't very efficient. It's not necessary to divide n by all numbers
 * between 2 and n-1 to determine whether it's prime. In fact, we need only
 * check divisors up to the square root of n. Modify the loop to take advantage
 * of this fact. Hint: Don't try to compute the square root of n; instead,
 * compare d * d with n
 *
 */

 // Note:
 // d = sqrt(n)
 // Transpose to
 // d*d = n

#include <stdio.h>

int n, d;

int main(void)
{
    printf("Enter a number for n: ");
    scanf("%d", &n);


    for (d = 2 ;; d++){
        if(d * d >= n){
            printf("%d is prime", n);
            break;
        }
        else if (n % d == 0){
            printf("%d is a divisor of %d", d, n);
            break;
        }
    }
    return 0;
}

/*
 * Experimentation
 *
 * check divisors up to the square root of n
 * compare d * d with n <--
 * not allowed to get the square root
 *
/*

/*
    for (d = 2; d < n; d++)
        if (n % d == 0)
            break;

    if (d < n)
        printf("%d is a divisor of %d", d, n);
    else
        printf("%d is prime", n);


    // Experiment one

    // Say n = 5

    for (d = 2; d < n; d++)
        if (n % d == 0)
            printf("%d is a divisor of %d", d, n);
            break;
        else if (d * d > n)
            printf("%d is prime", n);
            break;

    // Experiment two

    // Say n = 5

    for (d = 2; d < n; d++) {
        if (d * d >= n) {
            printf("%d is prime", n);
            break;
        } else if (n % d == 0) {
            printf("%d is a divisor of %d", d, n);
            break;
        }
    }
*/
