/**
 * Write a loop that prints all temperature readings stored
 * in row i of the temperatures array (see Exercise 14).
 * Use a pointer to visit each element of the row.
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
void  print_temp_array(const int [*], int, int);

// Function Definitions
int main(void)
{
    printf("[If 1: Contains 32 | If 0: No 32]: %d\n", search(temperature[0] ,M*N , TEMP));
    print_temp_array(temperature[0], N, M);
    return 0;
}

// Search Function
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

// Function to Print all temperature values in the temperature array
void  print_temp_array(const int temp[], int n, int m)
{
    int *p;
    int column_num, x, y;

    x = m;
    y = m;

    for (p = temp; p < temp + (n * m); p++) {

        if ((int)(p - temp) == x) {
            printf("\n");
            x += y;
        }
        printf("%2d ", *p);
    }
}
