/** Assume that the following array contains a week's worth
 *  of hourly temperature readings, with each row containing
 *  the readings for one day:
 *
 *  int temperature[7][24];
 *
 *  Write a statement that uses the search function
 *  (see Exercise 7) to search the entire temperatures
 *  array for the value 32
 */

// Preprocessing Directives
#include <stdio.h>
#include <stdbool.h>
#define N 7
#define M 24
#define TEMP 32

// External Variables
int temperature[N][M] =  {{34, 56, 34, 23, 34},
                          {78, 45, 56, 76, 23},
                          {98, 45, 34, 23, 34},
                          {67, 45, 34, 34, 45},
                          {67, 34, 56, 78, 34},
                          {76, 45, 57, 23, 12},
                          {89, 67, 45, 32, 56}};
                          
// Function Prototypes
bool search(const int [*], int, int);

// Function Definitions
int main(void)
{
    printf("[If 1: Contains 32 | If 0: No 32]: %d", search(temperature[0] ,M*N , TEMP));
    return 0;
}

 bool search(const int a[], int n, int key)
{
    int *p;
    for (p = a; p < a + n; p++) {
        if (*p == key){
            return true;
        }
        //printf("%d", *p);
    }
    return false;
}
