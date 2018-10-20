/**
 * Write a function num_digits(n) that returns the
 * number of digits in n (a positive integer). Hint:
 * To determine the number of digits in a number n,
 * divide it by 10 repeatedly. When n reaches 0,
 * the number of divisions indicates how many digits
 * n originally dad.
 */

#include <stdio.h>
int n;

int num_digits(unsigned long); // Function Prototype

int main(void)
{

    printf("sizeof(unsigned long) = %lu", sizeof(unsigned long));
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("The number of digits is: %d", num_digits(n));


    return 0;
}

// Function that returns the number of digits in a number
// up to the value of 4,294,967,295

int num_digits(unsigned long n)
{
    int sum = 0;
    while (n != 0)
    {
        sum++;
        n /= 10;
    }
    return sum;
}
