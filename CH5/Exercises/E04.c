/* Write a single expression whose value is either -1, 0, or +1,
 * depending on whether i is less that, equal to, or greater
 * than j, respectively
 */

#include <stdio.h>

int i, j;

int main(void)
{
    printf("Enter a number for i: ");
    scanf("%d", &i);

    printf("Enter a number for j: ");
    scanf("%d", &j);

    printf("%d", i > j ? 1 : (i < j ? -1 : 0));

    return 0;
}
