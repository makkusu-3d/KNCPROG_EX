/* Translate the  program fragment of Exercise 2 into a single for statement */

#include <stdio.h>

int i;

int main(void)
{
    // Conversion to a for loop with caveat that you are not
    // guaranteed a iteration for example if i is equal to zero
    // or less than the for loop test expression will be false
    // ending the loop before any iterations where the do while
    // loop will get one

    for (i = 9384; i > 0; i /= 10)
        printf("%d ", i);

    // Testing equivalent do_while loop
    // and both output the same values

    i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);

    return 0;
}
