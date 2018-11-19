/**
 * Rewrite the following function to use pointer arithmetic
 * of array subscripting. (In other words, eliminate the
 * variables i and j and all uses of the [] operator.) Use
 * a single loop of nested loops.
 *
 * int sum_two_dimensional_array(const int a[][LEN], int n)
 * {
 *   int i, j, sum = 0;
 *
 *   for (i = 0; i < n; i++)
 *      for (j = 0; j < LEN; j++)
 *          sum += a[i][j];
 *   return sum;
 * }
 */

// Preprocessing Directives
#include <stdio.h>
#define N 3
#define M 3

// External Variables
int arr[N][M] = {{1,1,1},{1,1,1},{1,2,1}};

// Function Prototypes
int sum_two_dimensional_array(int, int, int*);

// Function Definitions
int main(void)
{
    int sum;

    sum = sum_two_dimensional_array(N, M, arr);
    printf("The sum of a two dimensional array: %d", sum);

}

int sum_two_dimensional_array(int n, int LEN, int *p)
{
    int sum = 0;
    int *a = p;

    for (; p < a + (n * LEN); p++) {
        sum += *p;
    }
    return sum;
}
