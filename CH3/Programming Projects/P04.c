/* Write a program that prompts the user to enter a telephone
 * number in the form (xxx) xxx-xxxx and then displays the number
 * in the form xxx.xxx.xxxx:
 */

#include <stdio.h>

int i,j,k;

int main(void)
{
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf(" (%d )%d -%d", &i, &j, &k);

    printf("You entered %d.%d.%d", i, j, k);

    return 0;
}
