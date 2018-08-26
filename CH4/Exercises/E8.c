/* Would the upc.c program still work if the expression
 * 9 - ((total - 1) % 10) were replaced by (10 - (total % 10)) % 10
 */

// The program still works

/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
        first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    
    // Answer:
    // Not a 100% Sure
    
    // But i think this still works because the (10 - (total % 10)) expression
    // will only be a value between 10 and 1. The expression will 
    // work out to be same value with or without % 10 from 1-9 and
    // with a 10 it the expression will be zero. 
    
    printf("Check digit: %d\n", (10 - (total % 10)) % 10);

    return 0;
}
