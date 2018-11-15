/**
 * Modify the find_largest function so that it uses pointer
 * arithmetic / not subscripting - to visit array elements
 */

// Preprocessing Directives
#include <stdio.h>

#define N 5

// External Variables
int a[N] = {9,3,5,101,3};

// Function Prototypes
int find_largest(int [*], int);

// Function Definitions
int main(void)
{
    printf("Largest array number: %d", find_largest(a,N));

    return 0;
}

// Updated find_largest function (pointer arithmetic)
int find_largest(int a[], int n)
{
    int *p = a, max = p[0];

    for (; p < a + n; p++)
        if (*p > max)
            max = *p;
    return max;
}
