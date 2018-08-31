/* Write a program that asks the user for a 24-hour time, then displays
 * in 12-hour form:
 *
 * Enter a 24-hour time: 21:11
 * Equivalent 12-hour time: 9:11 PM
 *
 * Be careful not to display 12:00 as 0:00
 *
 */

#include <stdio.h>

int hours, mins;

int main(void)
{
    printf("Enter a 24-Hour time: ");
    scanf("%d :%d", &hours, &mins);

    if (hours == 12 && mins == 0)
        printf("Equivalent 12-hour time: %d:%.2d PM", hours, mins);
    else if (hours > 12)
        printf("Equivalent 12-hour time: %d:%.2d PM", hours - 12, mins);
    else
        printf("Equivalent 12-hour time: %d:%.2d AM", hours, mins);

    return 0;
}
