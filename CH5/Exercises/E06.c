/* What does the following statement print if i has the value 17?
 * What does it print if i has the value - 17?
 *
 * printf("%d\n", i >= 0 ? i : -i);
 */

// If i has a value of 17 the statement prints 17
// If i has a value of -17 the statement prints 17

#include <stdio.h>

int i = -17;

int main(void)
{
    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}
