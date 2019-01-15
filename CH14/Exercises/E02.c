/**
 * Write a macro NELEMS(a) that computes the number of
 * elements in a one-dimensional array a.
 * Hint: See the discussion of the sizeof operator
 * in Section 8.1.
 */

// Preprocessing Directives
#include <stdio.h>

#define NELEMS(a) ((sizeof(a))/(sizeof(a[0])))

// External Variables
int arr[10] = {};

// Function Prototypes

// Function Definitions
int main(void)
{
    printf("The size of the array: %d", NELEMS(arr));

    return 0;
}
