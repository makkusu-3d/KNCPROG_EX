/*
 * Program that declares several int and float variables
 * without initializing them.
 */

#include <stdio.h>

int a,b,c;
float i,j,k;

int main(void)
{
    printf("int a: %d\n", a);
    printf("int b: %d\n", b);
    printf("int c: %d\n", c);

    printf("float i: %f\n", i);
    printf("float j: %f\n", j);
    printf("float k: %f\n", k);

    return 0;
}

/*
 * Patterns:
 * There is no pattern to the number's, simply zero values printed
 * to the console. 
 */
