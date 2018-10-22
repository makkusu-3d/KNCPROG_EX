/**
 * Write a function that computes the value of the
 * following polynomial:
 *
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 *
 * Write a program that asks the user to enter a value
 * for x, calls the function to compute the value of the
 * polynomial, and then displays the value returned
 * by the function.
 */


 #include <stdio.h>

 double x;

 double poly_function(double);

 int main(void)
 {
     printf("Enter a value for x: ");
     scanf("%lf", &x);

     printf("The value returned by the polynomial function (Scientific Notation): %e", poly_function(x));

     return 0;
 }

 double poly_function(double x)
 {
     return 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
 }

