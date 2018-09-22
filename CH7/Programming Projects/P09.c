/* Write a program that asks the user for a 12-hour
 * time, then displays the time in 24-hour form:
 *
 * Enter a 12-hour time: 9:11 PM
 * Equivalent 24-hour time: 21:11
 *
 * See programming Project 8 for a description of
 * the input format.
 */

#include <stdio.h>
#include <ctype.h>

int hours, minutes;
char character;

int main(void)
{
    printf("Enter a 12-hour time: ");
    scanf(" %d :%d %c",&hours, &minutes, &character);

    if(toupper(character) == 'P'){
        hours += 12;
    }
    
    printf("Equivalent 24-hour time: %d:%.2d", hours, minutes);

    return 0;
}
