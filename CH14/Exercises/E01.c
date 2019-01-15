/**
 * Write parameterized macros that compute the following
 * values.
 *
 * (a) The cube of x.
 * (b) The remainder when n is divided by 4.
 * (c) 1 if the product of x and y is less than 100,0
 *     otherwise.
 *
 * Do your macros always work? If not, describe what
 * arguments would make them fail.
 */

 /**
  * Answers:
  * (a) CUBE(x) ((x)*(x)*(x))
  * (b) REMAINDER(n) ((n) % 4)
  * (c) PRODUCT_100(x,y) ((x)*(y)<100 ? 1:0)
  *
  * Obviously any non-integer or non-float type argument will cause the
  * parameterized macros to fail.
  *
  */


 // Testing Parameterized macros

 // Preprocessing Directives

 #include <stdio.h>

 #define CUBE(x) ((x)*(x)*(x))
 #define REMAINDER(n) ((n) % 4)
 #define PRODUCT_100(x,y) ((x)*(y)<100 ? 1:0)

 // External Variables
 int num, x, y;

 // Function Prototypes

 // Function Definitions
 int main(void)
 {
     printf("Enter a number to be cubed: ");
     scanf("%d", &num);
     printf("The cube of %d = %d", num, CUBE(num));

     printf("\nEnter a number to get a remainder when divided by four: ");
     scanf("%d", &num);
     printf("The reminder is: %d", REMAINDER(num));

     printf("\nEnter a value for x: ");
     scanf("%d", &x);
     printf("\nEnter a value for y: ");
     scanf("%d", &y);
     printf("Is the product of x * y less then a hundred (1=True,0=False): %d", PRODUCT_100(x,y));

     return 0;
 }
