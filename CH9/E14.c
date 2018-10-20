/**
 * The following function is supposed to return true if any element
 * of the array a has the value 0 and false if all elements are
 * nonzero. Sadly, it contains an error and show how to fix it:
 *
 */

#include <stdio.h>
#include <stdbool.h>

int array[4] = {3 , 2, 3, 2};

bool has_zero(int a[], int n); // Function Prototype

int main(void)
{
    printf("The Boolean return for the function has_zero(): %d ", has_zero(array, 4));

    return 0;

}

/**
bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == 0)
            return true;
        else                // For each increment of the array
            return false;   // the element is tested against zero
    }                       // The problem is that this function
}                           // Will return false at the first element
                            // if the first element is non zero
                            // not allowing the rest of the array to
                            // be checked
*/

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == 0){
            return true;
        }
    }
    return false;
}
