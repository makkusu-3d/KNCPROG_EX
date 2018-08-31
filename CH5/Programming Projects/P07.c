/* Write a program that finds the largest and smallest
 * of four integers entered by the user:
 *
 * Enter four integers: 21 43 10 35
 * Largest
 * Smallest
 *
 * Use as few if statements as possible. Hint: Four if
 * statements are sufficient
 *
 */

#include <stdio.h>

// max_i and min_i for first two numbers (set 1)
// max_i2 and min_i2 for last two numbers (set 2)
// f_min and f_max for chosen max and min numbers in set 1 and set 2

int i1, i2, i3, i4, max_i, min_i, max_i2, min_i2, f_min, f_max;


int main(void)
{

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    // if/else statement 1 - max and min of first two numbers
    if(i1 < i2){
        min_i = i1;
        max_i = i2;
    }
    else {
        min_i = i2;
        max_i = i1;
    }

    // if/else statement 2 - max and min of last two numbers
    if(i3 < i4){
        min_i2 = i3;
        max_i2 = i4;
    }
    else {
        min_i2 = i4;
        max_i2 = i3;
    }

    // if/else statement 3 - Choosing the final minimum
    // Could use this instead: f_min = min_i < min_i2 ? min_i : min_i2;
    if(min_i < min_i2){
        f_min = min_i;
    }
    else {
        f_min = min_i2;
    }

    // if/else statement 4 - Choosing the final maximum
    // Could use this instead: f_max = max_i < max_i2 ? max_i2 : max_i;
    if(max_i < max_i2){
        f_max = max_i2;
    }
    else {
        f_max = max_i;
    }

    printf("Largest: %d\n", f_max);
    printf("Smallest: %d\n", f_min);
}
