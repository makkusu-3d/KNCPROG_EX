/**
 * Write a loop that prints the highest temperature in the
 * temperatures array (see Exercise 14) for each day of the
 * week. The loop body should call the find_largest function
 * passing it one row of the array at a time.
 */

// Preprocessing Directives
#include <stdio.h>
#include <stdbool.h>
#define N 7
#define M 24
#define TEMP 32

// External Variables
int temperature[N][M] =  {{34,56,34,23,34,23,  45,56,34,45,56,67,  67,56,45,34,45,45, 56,34,45,56,34,45},
                          {78,45,56,76,23,45,  45,67,45,56,67,34,  34,45,56,43,54,65, 76,54,43,56,67,54},
                          {98,45,34,23,34,54,  87,98,34,32,34,54,  54,65,67,87,34,23, 65,67,87,45,43,56},
                          {67,45,34,34,45,65,  54,65,76,34,54,65,  76,56,45,65,76,56, 54,34,54,76,56,45},
                          {67,34,56,78,34,34,  34,45,65,34,54,65,  65,45,34,65,87,56, 65,45,34,54,56,54},
                          {76,45,57,23,12,34,  43,45,65,34,54,34,  43,54,56,34,45,34, 34,54,65,45,43,23},
                          {89,67,45,32,56,43,  43,54,65,34,54,65,  76,56,45,34,54,65, 54,87,76,45,34,34}};

// Function Prototypes
bool search(const int [*], int, int);
void  print_temp_array(int, int, const int [][*]);

// Function Definitions
int main(void)
{
    print_week_temp(N, M, temperature);
    return 0;
}

// Function to find the maximum temperature for every day
void print_week_temp(int n, int m, int a[n][m])
{
    int i;
    for (i = 0; i < n; i++) {
        printf("Highest Temperature for day %d: %d\n", i + 1, find_largest(a[i], m));
    }
}

// Find largest Function
int find_largest(int a[], int n)
{
    int i, max;

    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
