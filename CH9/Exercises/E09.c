/**
 * What will be the output of the following program?
 *
 * The output to the following programs will be
 * i = 1, j = 2
 *
 * This is because the value of i and j where not changed
 * with the function call of swap().
 * 
 */
 
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int i = 1, j = 2;
    
    swap(i, j);
    printf("i = %d, j = %d\n", i, j);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
