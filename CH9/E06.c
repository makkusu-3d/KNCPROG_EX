/**
 * Write a function digit(n,k) that returns the k^th
 * digit (from the right) in n ( a positive integer).
 * For example, digit(829, 1) returns 9, digit(829, 2)
 * returns 2, and digit(829, 3) return 8. If k is
 * greater than the number of digits in n, have the
 * function return 0;
 */

#include <stdio.h>

int digit(int,int); // Function prototype
int n, k;

int main(void)
{
    printf("Enter the a digit: ");
    scanf("%d", &n);

    printf("Enter how a value for the kth value in: ");
    scanf("%d", &k);

    printf("The kth digit %d", digit(n,k));

    return 0;
}

int digit(int n, int k)
{

    int num_digit = 0, number;

    number = n;
    // Counting the number of digits
    while (number != 0)
    {
        number /= 10;
        num_digit++;
    }
    
    // VLA
    int arr[num_digit], i = 0;

    // Creating an array with the digits of the number
    while(n != 0)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    // Deciding if k is larger than the number of the
    // the digits or not
    if (k > i){
        return 0;
    } else {
        return arr[i-k];
    }
}
