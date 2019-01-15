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
 #define DOUBLE_V2(x) (2*(x))

 // External Variables
 int x;

 // Function Prototypes

 // Function Definitions
 int main(void)
 {
    printf("Value %d", DOUBLE(1+2));   // Output: 4
    printf("\nValue %d", 4/DOUBLE(2)); // Output: 4

    printf("\nValue %d", DOUBLE_V2(1+2));   // Output: 6
    printf("\nValue %d", 4/DOUBLE_V2(2)); // Output: 1

    return 0;
 }


