/**
 * Modify the find_middle function of Section 11.5 so that it
 * uses pointer arithmetic to calculate the return value.
 */

// Preprocessing Directives
#include <stdio.h>
#define N 5

// External Variable
int a[N] = {3,1,3,2,5};

// Function Prototypes
int *find_middle(int *, int);

// Function Definition
int main(void)
{
    printf("Middle Value: %d ", *find_middle(&a, N));
    
    return 0;
}

// Updated find middle function
int *find_middle(int *p, int n)
{
    for (;p < a + ((int) n / 2); p++);
    
    return p;
}
