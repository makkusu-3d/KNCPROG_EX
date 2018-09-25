/* The Fibonacci numbers are 0,1,1,2,3,5,8,13,..,
 * where each number is the sum of the two
 * preceding numbers. Write a program fragment
 * that declares an array named fib_numbers of
 * length 40 and fills the array with the first 40
 * Fibonacci numbers. Hint: Fill in the first two
 * numbers individually, then use a loop to compute
 * the remaining numbers.
 *
 */

#include <stdio.h>

#define N (sizeof(fib_numbers) / sizeof(fib_numbers[0]))

int fib_numbers[40] = {0,1}, i;

int main(void)
{
    for (i = 2; i < N; i++) {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }
    for (i = 0; i < N; i++) {
        printf("%10d", fib_numbers[i]);
        if((i + 1) % 5 == 0){
            printf("\n");
        }
    }
    return 0;
}
