/**
 * (a) Declare structure variables named c1, c2, and c3, each having
 * members real and imaginary of type double
 */

struct {
    double r;
    double i;
} c1, c2, c3;

/**
 * (b) Modify the declaration in part (a) so that c1's members initially
 * have the value 0.0 and 1.0. while c2's members are 1.0 and 0.0
 * initially. (c3 is not initialized)
 */

 struct {
    double r;
    double i;
} c1 = {0.0,1.0},
  c2 = {1.0,0.0},
  c3;

/**
 * (c) Write statements that copy the members of c2 into c1. Can this
 * be done in one statement, or does it require two.
 *
 * This can be done in one statement with structure operation of
 * assignment.
 */

c1 = c2;

/**
 * (d) Write statements that add the corresponding members of c1
 * and c2, storing the result in c3.
 */

c3.r = c1.r + c2.r;
c3.i = c1.i + c2.i;
