/* Is the following statement legal?
 *
 * if (n >= 1 <= 10)
 *      printf("n is between 1 and 10\n")
 */

// This statement is legal, but it is not comparable to
// the expression often seen in mathematics. >= and <=
// have left-to-right associativity therefore n >= 1 will
// evaluate to a 1 or 0 depending on n which will than be
// compared to <= 10. Any value of n will lead to the expression
// evaluating to true causing the printf function to run no
// matter what value of n.

// For n = 0 the expression will be true ( 1 ) and
// n is between 1 and 10 will display on the console

#include <stdio.h>

int n = 0;

int main(void)
{
    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");

    return 0;
}
