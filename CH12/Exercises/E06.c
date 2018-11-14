/**
 * Rewrite the following function to use pointer arithmetic
 * instead of array subscripting. (In other words, eliminate
 * the variable i and all uses of the [] operator.) Make
 * as few changes as possible.
 */

 // Preprocessing Directives
 #include <stdio.h>
 #define N 4

  // External Variables
 int a[N] = {1,2,3,4};

 // Function Prototype
 int sum_array_updated(int*, int);

 // Function Definitions
 int main(void)
 {
     printf("%d ", sum_array_updated(a,N));

     return 0;
 }

 // Original Function
 int sum_array_original(const int a[], int n)
 {
     int i, sum;

     sum = 0;
     for (i = 0; i < n; i++)
        sum += a[i];
     return sum;
 }


 // Updated Function
int sum_array_updated(int *p, int n)
 {
     int sum;

     sum = 0;
     for (p = a; p < a + n; p++)
        sum += *p;
     return sum;
 }
