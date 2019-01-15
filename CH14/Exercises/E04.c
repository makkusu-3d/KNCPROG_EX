/**
 * For each of the following macros, give an example
 * that illustrates a problem with the macro
 * and show how to fix it.
 *
 * (a) #define AVG(x,y)  (x+y)/2
 * (b) #define AREA(x,y) (x)*(y)
 *
 */

 /**
  * (a) If you want to multiply or divide this parametrized
  *     macro by a number you will have problems
  *     due the order of operations
  *     i.e --> 2*AVG(x,y)
  *         --> 2*AVG(1,2)
  *         --> 2*(1+2)/2
  *         Which will calculate out like this
  *         --> (2*(1+2))/2
  *
  *     To fix this:
  *     #define AVG(x,y) ((x+y)/2)
  *
  * (b) If you want to multiply or divide this parametrized
  *     macro by a number you will have problems
  *     due the order of operations
  *     i.e --> 2*AREA(x,y)
  *         --> 2*AREA(1,2)
  *         --> 2*(1)*(2)
  *         --> (2*(1))*(2)
  */
