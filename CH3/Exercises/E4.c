/* With scanf("%d%f%d", &i, &x, &j); and a user input of 10.3 5 6
 * what will be the values of i,x, and j after the call
 */

#include <stdio.h>

int i,j;
float x;

int main(void)
{
    printf("Input a int, float, int: ");
    scanf("%d%f%d", &i, &x, &j);
    printf("%d %f %d", i, x, j);

    return 0;
}

// Values after the call with a user input: 10.3 5 6
// i = 10
// x = 0.300000
// j = 5

