/* Show how to replace a continue statement by an equivalent goto statement */

#include <stdio.h>

int i, n, sum;

int main(void)
{
    // Using the continue statement

    printf("Enter three numbers to get sum: ");

    n = 0;
    sum = 0;

    while (n < 3){
        scanf("%d", &i);
        if(i == 0)
            continue;
        sum += i;
        n++;
    }
    printf("The sum is %d", sum);

    // Using the equivalent with a goto statement

    n = 0;
    sum = 0;
    i = 0;

    printf("\nEnter three numbers to get sum: ");

    while (n < 3){
        scanf("%d", &i);
        if(i == 0)
            goto the_end;
        sum += i;
        n++;
        the_end: ;
    }
    printf("The sum is %d", sum);

    return 0;
}
