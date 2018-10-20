/**
 * Write function that return the following values.
 * (Assume that a and n are parameters, where a is an
 * array of int values and n is the length of the array.)
 *
 * (a) The largest element a.
 * (b) The average of all element in a
 * (c) The number of positive elements in a.
 */

// Testing Functions

#include <stdio.h>

// Function Prototypes
int largest_element(int a[], int n);
float average_of_elements(int a[], int n);
int number_positive_elements(int a[], int n);

int i = 0, array_size = 0, element, n;

int main(void)
{

    // The array to be tested
    int a[10] = {1,-2,3,-4,5,6,7,-8,9,10};
    n = 10;

    // Testing the Functions
    printf("The largest element is: %d\n", largest_element(a, n));

    printf("The average of the array is: %f\n", average_of_elements(a, n));

    printf("The number of positive elements is: %d\n", number_positive_elements(a, n));

    return 0;
}





// (a)

int largest_element(int a[], int n)
{
    int element = 0, i;

    for (i = 0; i < n; i++) {
        if (a[i] > element) {
            element = a[i];
        }
    }
    return element;

}

// (b)

float average_of_elements(int a[], int n)
{
    int i;
    float sum = 0.0f;

    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

// (c)

int number_positive_elements(int a[], int n)
{
    int positive = 0;

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            positive++;
        }
    }

    return positive;
}
