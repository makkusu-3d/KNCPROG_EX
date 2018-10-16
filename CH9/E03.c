/**
 * Write a function gcd(m,n) that calculates the greatest
 * common divisor of the integers m and n. (Programming
 * Project 2 in Chapter 6 describes Euclid's algorithm for
 * computing the GCD)
 */

 #include <stdio.h>

int m, n, r;

int gcd(int, int); // Function Prototype

int main(void)
{
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("Greatest common divisor: %d", gcd());

    return 0;
}

// Euclids's Algorithm Function

int gcd(int m, int n)
{
    int r;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}
