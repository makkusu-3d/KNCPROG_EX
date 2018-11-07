/**
 * Write the following function:
 *
 * void find_two_largest(int a[], int n, int *largest,
 *                       int *second_largest);
 *
 * When passed an array a of length n, the function will
 * search a for its largest and second-largest elements
 * storing them in the variables pointed to by largest and
 * second_largest, respectively.
 */

// Preprocessing Directives
#include <stdio.h>

// Type Definitions

// Declarations of external variables
int a[], largest = 0, second_largest = 0, n = 0;

// Function Prototypes
void find_two_largest(int a[], int, int *, int *);
void collect_array(void);

// Function Definitions
int main(void)
{
    collect_array();
    find_two_largest(a, n, &largest, &second_largest);
    printf("Largest number: %d | Second Largest: %d", largest, second_largest);

}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{

    int i;

    for (i = 0; i < n; i++) {
        if (a[i] > *largest) {
            *largest = a[i];
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] == *largest) {
            a[i] = 0;
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}

void collect_array(void)
{
    char ch;
    int i = 0;
    int *p = &n;

    printf("Input the array numbers: ");
    while((ch = getchar()) != '\n')
    {
        a[i++] = ((int) ch - 48);
        *p = *p + 1;
    }
}
