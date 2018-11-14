/**
 * Write the following function:
 *
 * bool search(const int a[], int n, int key);
 *
 * a is an array to be searched, n is the number of elements
 * in the array, and key is the search key. Search should
 * return true if key matches some element of a, and false
 * if it doesn't. Use pointer arithmetic - not subscripting
 * - to visit array elements
 */

// Preprocessing Directives
#include <stdio.h>
#include <stdbool.h>
#define N 4

// Declarations of External Variables
int a[N] = {1,2,3,4}, ex_key;

// Function Prototypes
bool search(const int a[*], int, int);

// Function Definitions
int main(void)
{
    printf("Enter the key number: ");
    scanf("%d", &ex_key);
    if (search(a,N,ex_key)) {
        printf("Matching key value");
    } else {
        printf("No Matching key value");
    }
    return 0;
}

bool search(const int a[], int n, int key)
{
    int *p;
    for (p = a; p < a + n; p++) {
        if (*p == key){
            return true;
        }
    }
    return false;
}
