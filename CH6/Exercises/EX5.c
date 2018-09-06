/* Which one of the following statements is not equivalent to the
 * other two (assuming that the loop bodies are the same)?
 *
 * (a) while (i < 10) {...}
 * (b) for (; i < 10;) {...}
 * (c) do {...} while (i < 10);
 *
 */

#include <stdio.h>
#define TEST 10

int main(void)
{
    // (a) and (b) are equivalent since if i is equal to 10 or greater
    // both loops will not execute due to the i < 10 test expression and
    // will output the same based on i in the print function
    // where (c) will execute the compound statement before evaluating
    // the test expression so for i of 10 or higher it will print that
    // to the console and then the test expression will be false
    // ending the loop


    // Testing the statements
    int i = TEST;
    while (i < 10) {
        printf("(a) %d ", i);  // <------|
        ++i;                   //        |
    }                          //        |
                               //        |
    i = TEST;                  //        |
    for (; i < 10;) {          //        |
        printf("(b) %d ", i);  // <----------------- Equivalent loop body
        ++i;                   //        |
    }                          //        |
                               //        |
    i = TEST;                  //        |
    do {                       //        |
        printf("(c) %d ", i);  // <------|
        ++i;
    }
    while (i < 10);

    return 0;
}
