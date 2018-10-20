/**
 * Rewrite the fact function so that it's no longer recursive
 */

#include <stdio.h>

int n;
int fact(int n); // Function prototype

int main(void)
{
    printf("Enter a number for the factorial function: ");
    scanf("%d", &n);

    printf("The return value is: %d", fact(n));

    return 0;
}


// Non recursive factorial function
int fact(int n)
{
    int i;

    for (i = n - 1; i > 0; i--) {
        n *= i;
    }
    return n;
}
