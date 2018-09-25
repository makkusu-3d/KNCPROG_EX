/* Write a declaration of an array named weekend
 * containing seven bool values. Include an
 * initializer that makes the first and last values
 * true; all other values should be false.
 *
 */

#include <stdbool.h>
#include <stdio.h>

// Declaration of weekend array
bool weekend[7] = {1,0,0,0,0,0,1}; // 0 => False
                                      // 1 => True
int i;

int main(void)
{
    for (i = 0; i < sizeof(weekend)/sizeof(weekend[0]); i++)
        printf(" %d", weekend[i]);

    return 0;
}
