/**
 * Write a program that asks the user to enter a series of integers
 * (which it stores in an array), then sorts the integers by
 * calling the function selection_sort. When given an array
 * with n elements, selection_sort must do the following:
 *
 * 1. Search the array to find the largest element, then move
 *    it to the last position in the array.
 *
 * 2. Call itself recursively to sort the first n-1 elements of the
 *    array.
 */

#include <stdio.h>
char ints;
int integers[], i, array_size = 0;
int selection_sort(int a[], int n); // Function Prototype


int main(void)
{
    printf("Enter a series of integers: ");
    for(i = 0;;i++) {
        scanf("%c", &ints);
        if (ints == '\n') {
            break;
        }
        integers[i] = (int) ints - 48;
        array_size++;
    }

    selection_sort(integers, array_size);
}

int selection_sort(int a[], int n)
{
    int i, save_large_element = 0, Last_position_element, element_position;

    for (i = 0; i < n; i++) {
        if (a[i] > save_large_element) {
            save_large_element = a[i];
            element_position = i;
        }
    }

    Last_position_element = a[n-1];
    a[n-1] = save_large_element;
    a[element_position] = Last_position_element;

    if (n < 1) {
        return;
    } else {
        return selection_sort(a, n - 1);
    }
}
