/* Which one of the following statements is not equivalent to the other
 * two (assuming that the loop bodies are the same)?
 *
 */

#include <stdio.h>

int i;

int main(void)
{
    // (a)
    for (i = 0; i < 10; i++)
        printf("%d ", i);

    // (b)
    for (i = 0; i < 10; ++i)
        printf("%d ", i);

    // (c)
    for (i = 0; i++ < 10;)
        printf("%d ", i);

    // i increments before the print function for (c) where
    // the increment for (a) and (b) happens after the print
    // function

    return 0;

    /* // While loop equivalent

    (a)
    i = 0;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }

    (b)
    i = 0;
    while (i < 10) {
        printf("%d ", i);
        ++i;
    }

    (c)
    i = 0;
    while(i++ < 10)
        printf("%d ", i);
    */

}
