/**
 * (a) Write a macro DISP(f,x) that expands into a call
 * of printf that displays the value of the function f
 * when called with argument x. For example,
 *
 * DISP(sqrt, 3.0);
 *
 * should expand into
 *
 * printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));
 *
 * (b) Write a macro DISP2(f,x,y) that's similar to DISP
 * but works for functions with two arguments.
 *
 * Answers:
 * (a) #define DISP(x, y) printf(#x"(%g) = %g\n", y, x(y) );
 * (b) #define DISP2(f,x,y) printf(#f"(%d,%d) = %lf\n", x, y, f(x,y));
 */

 // Preprocessing Directives
 #include <stdio.h>
 #include <math.h>

 #define DISP(x, y) printf(#x"(%g) = %g\n", y, x(y) );

 #define DISP2(f,x,y) printf(#f"(%d,%d) = %lf\n", x, y, f(x,y));

 // External Variables

 // Function Prototypes

 // Function Definitions
 int main(void)
 {
     DISP(sqrt, 3.0);
     DISP2(pow, 2, 4);

     return 0;
 }
