/**
 * Write a recursive version of the gcd function
 * (see Exercise 3). Here's strategy to use for computing
 * gcd(m, n): If n is 0, return m. Otherwise, call gcd
 * recursively, passing n as the first argument and
 * m % n as the second
 */

 #include <stdio.h>

int m, n, r;

int gcd(int, int); // Function Prototype

int main(void)
{
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("Greatest common divisor: %d", gcd(m,n));

    return 0;
}

// Euclid's Algorithm Function

int gcd(int m, int n)
{
    if (n == 0) {
        return m;
    } else
        return gcd(n, m % n);
}


