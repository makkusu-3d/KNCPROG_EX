/**
 * Show the output of the following program and explain what it does
 *
 * The output is: 3
 *
 * The reason for this is that the while loop
 * condition has the function f2 which takes
 * the argument of n. The function returns
 * 0 when n is equal to 3
 * which ends the while loop therefore n gets
 * returned as 3 which gets printed to the terminal
 */

#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

int main(void)
{
    printf("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;

    while ((*f)(n)) n++;
    printf("count f1\n");
    return n;
}

int f2(int i)
{
    return i * i + i - 12;
    printf("count f2\n");
}
