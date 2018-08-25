/* Write a program that accepts a date from the user in the form
 * mm/dd/yyyy and then displays it in the form yyyymmdd
 */

#include <stdio.h>

int i,j,k;

int main(void)
{
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &i, &j, &k);

    printf("You entered the date %d%.2d%d", k,i,j);

    return 0;
}
