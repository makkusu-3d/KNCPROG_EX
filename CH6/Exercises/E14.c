/* Find the error in the following program fragment and fix it.
 * if (n % 2 == 0);
 *  printf("n is even\n");
 *
 */

// The error is the semicolon after the right parentheses of
// the if statement test expression. This creates a null statement
// ending the if statement prematurely. In essence the print function
// is not in the body of the if statement and acts as its own
// statement after the if statement. Basically "n is even" will
// always print no matter the value of n.

// Testing what happens with this semicolon for fun

#include <stdio.h>

int n;

int main(void)
{               // | --- Null Statement ending the if statement prematurely
                // v
    if (n % 2 == 0);
        printf("n is even\n");

    return 0;
}
