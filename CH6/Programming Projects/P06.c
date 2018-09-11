/* Write a program that prompts the user to enter a number n, then
 * prints all even squares between 1 and n. For example, if the user
 * enters 100, the program should print the following:
 *
 * 4
 * 16
 * 36
 * 64
 * 100
 *
 */

#include <stdio.h>

int i, n;

int main(void)
{
    printf("Program that computes the even squares from 1 to n\n");
    printf("Enter a number for n: ");
    scanf("%d", &n);

    i = 2;

    while (i * i <= n){
        printf("%d\n", i * i);
        i += 2;
    }

    return 0;
}

