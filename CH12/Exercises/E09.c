/**
 * Write the following function
 *
 * double inner_product(const double *a, const double *b,
 *                      int n);
 *
 * a and b both point to arrays of length n. The function
 * should return a[0] * b[0] + a[1] * b[1] +...+
 * a[n-1] * b[n-1]. Use pointer arithmetic - not subscripting
 * - to visit array elements.
 */

// Preprocessing Directives
#include <stdio.h>
#define N 4

// Declarations of External Variables
double ex_a[N] = {1.0,2.0,3.0,4.0}, ex_b[N] = {1.0,2.0,3.0,4.0};

// Function Prototypes
double inner_product(const double *, const double *, int);

// Function Definitions
int main(void)
{
    printf("Returned value: %lf", inner_product(&ex_a, &ex_b, N));

    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    double sum = 0;
    for (;a < &ex_a + n; a++, b++) {
        sum += ((*a) * (*b));
    }
    return sum;
}
