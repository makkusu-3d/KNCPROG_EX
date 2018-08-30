/* What output does the following program produce?
 * (Assume that i is an integer variable)
 *
 */

// since i % 3 is 1 % 3 which equates to 1 which
// case 1 executes with one being printed to the console
// since there is no break statement with case 1 it cascades
// to case 2 with two being printed to the console.
//
// Output: onetwo

// Test

#include <stdio.h>

int i;

int main(void)
{
    i = 1;
    switch(i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        // no break statement
        case 2: printf("two");
    }

    return 0;
}
