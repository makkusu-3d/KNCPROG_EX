/**
 * Let DOUBLE be the following macro:
 *
 * #define DOUBLE(x) 2*x
 *
 * (a) What is the value of DOUBLE(1+2)?
 * (b) What is the value of 4/DOUBLE(2)?
 * (c) Fix the definition of double
 *
 */

 /**
  * DOUBLE(1+2) --> 2*1+2 --> 4
  * 4/DOUBLE(2) --> 4/2*2 --> 4
  *
  * fixing the definition of double
  *
  * #define DOUBLE(x) (2*(x))
  */

 // Testing the macros

 // Preprocessing Directives
 #include <stdio.h>

 #define DOUBLE(x) 2*x

 // External Variables
 int x;

 // Function Prototypes

 // Function Definitions
 int main(void)
 {
    printf("Value %d", DOUBLE(1+2));
    printf("\nValue %d", 4/DOUBLE(2));

    return 0;
 }
