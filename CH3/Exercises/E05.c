/* With a scanf("%f%d%f", &x, &i, &y); with a user input of
 * 12.3 45.6 789 what will be the values of x, i and y
 * assuming that x and are float variables and i is an int
 * variable
 */

#include <stdio.h>

int i;
float x,y;

int main(void)
{
    printf("Enter a float, int and float: ");
    scanf("%f%d%f", &x, &i, &y);
    printf("%f %d %f", x, i, y);

    return 0;
}

// Output:
// x = 12.300000
// i = 45
// y = 0.600000
