/**
 * Modify the maxmin.c program of Section 11.4 so that the
 * max_min function uses a pointer instead of an integer to
 * keep track of the current position in the array.
 */

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[N], big, small;

    int *ptr;

    printf("Enter %d numbers: ", N);
    for (ptr = b; ptr < b + N; ptr++)
        scanf("%d", ptr);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int *arr, int n, int *max, int *min)
{
    int *ptr;

    *max = *min = *arr;

    for (ptr = arr; ptr < arr + n; ptr++) {
        if (*ptr > *max)
            *max = *ptr;
        else if (*ptr < *min)
            *min = *ptr;
    }
}
