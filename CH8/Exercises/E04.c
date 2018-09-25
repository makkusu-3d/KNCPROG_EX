/* (C99) Repeat Exercise 3, but this time use a
 * designated initializer. Make the initializer as
 * short as possible.
 *
 */

#include <stdbool.h>
#include <stdio.h>

// Declaration of an array
bool weekend[7] = {[0]=1,[6]=1};      // 0 => False
                                      // 1 => True
int i;

int main(void)
{
    for (i = 0; i < sizeof(weekend)/sizeof(weekend[0]); i++)
        printf(" %d", weekend[i]);

    return 0;
}
