/**
 * Which of the following would be valid prototypes for
 * function that returns nothing has one double parameter
 *
 * (a) void f(double x); --> Valid Prototype: Compiler knows
 *                           the function returns nothing due
 *                           to the void and that the 
 *                           parameter takes type double.
 *                           
 * (b) void f(double);   --> Valid Prototype: For the same
 *                           as noted above. (You don't need
 *                           to list the parameter names in
 *                           the function prototype)
 *
 * (c) void f(x);        --> Invalid prototype: The compiler
 *                           does not know what type the
 *                           parameter is and will do
 *                           default integer promotion. 
 *  
 * (d) f(double x);      --> Invalid prototype: There is no
 *                           return type for the function
 *                           prototype therefore invalid with C99.
 *                           Valid in C89, but will get a return type
 *                           of int.
 */
