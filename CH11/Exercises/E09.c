/**
 * Write the following function:
 *
 * int *find_largest(int a[], int n);
 *
 * When passed an array of length n, the function will
 * return a pointer to the array's largest element.
 */

// Preprocessing Directives
#include <stdio.h>

// Declarations of External Variables
int a[], n = 0, *p;

// Function Prototypes
int *find_largest(int a[*], int);
void collect_array(void);

// Function Definitions
int main(void)
{
    collect_array();
    p = find_largest(a,n);
    printf("Largest Element: %d", *p);


    return 0;
}

int *find_largest(int a[n], int n)
{
    int i, largest = 0;

    // Finding the Largest Element
    for (i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    // Finding the element position
    for (i = 0; i < n; i++) {
        if (a[i] == largest) {
            return &a[i];
        }
    }
}

void collect_array(void)
{
    char ch;
    int i = 0;
    int *j = &n;

    printf("Input the array numbers: ");
    while((ch = getchar()) != '\n')
    {
        a[i++] = ((int) ch - 48);
        *j = *j + 1;
    }
}
