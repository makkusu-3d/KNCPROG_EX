/**
 * Suppose that a is a one-dimensional array and p is a
 * pointer variable. Assuming that the assignment p = a
 * has just been performed, which of the following expressions
 * are illegal because of mismatched types? Of the remaining
 * expressions, which are true (have a non-zero value)?
 *
 * int *p, a[N] = {};
 * p = a; // Pointing to the address of a[0]
 *
 * (a) p == a[0]
 * (b) p == &a[0]
 * (c) *p == a[0]
 * (d) p[0] == a[0]
 *
 * (a) illegal
 * (b) Legal --> True
 * (c) Legal --> True
 * (d) Legal --> True
 *
 */

#include <stdio.h>
#include <stdbool.h>

int *p, a[4] = {1,2,3,4};

int main(void)
{
    p = a;

    printf("\np == a[0]: %d where p = %p and a[0] = %d", p == a[0], p, a[0]);
    printf("\np == &a[0]: %d where p = %p and &a[0] = %p", p == &a[0], p, &a[0]);
    printf("\np == a[0]: %d where *p = %d and a[0] = %d", *p == a[0], *p, a[0]);
    printf("\np[0] == a[0]: %d where p[0] = %d and a[0] = %d", p[0] == a[0], p[3], a[0]);

    return 0;
}
