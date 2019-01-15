/**
 * Write the following parameterized macros.
 *
 * (a) CHECK(x,y,n) - Has the value 1 if both x and y
 *     fall between 0 and n - 1, inclusive.
 * (b) MEDIAN(x,y,z) - Finds the median of x,y and z.
 * (c) POLYNOMIAL(x) - Computes the polynomial
 *     3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 */

 // Preprocessing Directives
 #include <stdio.h>
 #include <math.h>

 #define CHECK(x,y,n)  ((x) >= 0 && (x) <= n-1 && (y) >= 0 && (y) <= n-1)

 #define MEDIAN(x,y,z) (((x)+(y)+(z))/3)

 #define POLYNOMIAL(x) ((3*pow((x),5)) + (2*pow((x),4)) - (5*pow((x),3)) - (pow((x),2)) + (7*(x)-6))

 // External Variables

 // Function Prototypes

 // Function Definitions
 int main(void)
 {
     printf("Check number: %d",  CHECK(1,2,10));
     printf("\nMedian Number: %d", MEDIAN(3,6,3));
     printf("\nPolynomial Number: %lf", POLYNOMIAL(4.0));

     return 0;
 }
