/**
 * Write the following function:
 *
 * void find_two_largest(const int *a, int n, int *largest,
 *                       int *second_largest);
 *
 * a points to an array of length n. The function searches
 * the array for its largest and second largest elements,
 * storing the in the variables pointed to by largest and
 * second_largest, respectively. Use pointer arithmetic
 * - not subscripting - to visit array elements.
 */

// Preprocessing Directives
#include <stdio.h>
#define N 5

// External Variables
int ex_a[N] = {9,4,5,3,12}, ex_largest = 0, ex_second_largest = 0;

// Function Prototypes
void find_two_largest(const int*, int, int*,int*);

// Function Definitions
int main(void)
{
    find_two_largest(&ex_a, N, &ex_largest, &ex_second_largest);
    printf("Largest: %d | Second Largest: %d", ex_largest, ex_second_largest);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    int *p;
    for (; a < ex_a + n; a++) {
        if (*a > *largest) {
            *largest = *a;
            p = a;
        }
    }

    *p = 0;

    for(a = ex_a; a < ex_a + n; a++) {
        if (*a > *second_largest) {
            *second_largest = *a;
        }
    }
}
