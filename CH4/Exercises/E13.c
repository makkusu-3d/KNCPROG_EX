/* Only one of the expressions ++i and i++ is exactly the
 * same as (i += 1); which is it? Justify your answer.
 */

// The ++i is the same as (i += 1) because i++ increments i
// at the sequence point after the statement. Where ++i and
// i += 1 increment within their expression.

// Test

#include <stdio.h>

int i = 1, j = 1, k = 1;

int main(void)
{
    printf("%d %d %d", ++i, j += 1, k++);

    return 0;
}

