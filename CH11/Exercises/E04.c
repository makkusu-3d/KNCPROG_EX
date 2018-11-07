/**
 * Write the following function:
 *
 * void swap(int *p, int *q)
 *
 * When passed the addresses of two variables, swap
 * should exchange the values of the variables:
 *
 * swap(&i, &j); /* exchanges values of i and j */

// Preprocessing Directives
#include <stdio.h>

// Declaration of external variables
int i = 3, j = 2;

// Function Prototype
void swap(int *p, int *q);

// Function Definitions
int main(void)
{
    printf("Before swap: i = %d | j = %d\n", i, j);
    swap(&i, &j);
    printf("After swap:  i = %d | j = %d\n", i, j);

    return 0;
}

void swap(int *p, int *q)
{
    int i = *p, j = *q;

    *p = j;
    *q = i;
}
