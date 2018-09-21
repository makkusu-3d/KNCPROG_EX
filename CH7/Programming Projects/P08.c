/* Modify Programming Project 8 from Chapter 5 so that
 * the user enters a time using the 12-hour clock.
 * The input will have the form hours:minutes followed
 * by either A,P,AM or PM (either lower-case or upper-case)
 * White space is allowed (but not required) between
 * the numerical time and the AM/PM indicator.
 * Example of valid input:
 *
 * 1:15P 1:15PM 1:15p 1:15pm 1:15 P 1:15 PM 1:15 p 1:15 pm
 *
 * You may assume that the input has one of these forms;
 * there is no need to test for errors.
 *
 */

#include <stdio.h>
#include <ctype.h>

int hours, mins, total_mins;
char am_pm;

int main(void)
{
    printf("Enter a 12-hour time with AM or PM: ");
    scanf("%d :%d %c", &hours, &mins, &am_pm);

    if (toupper(am_pm) == 'A'){
        total_mins = hours * 60 + mins;
    } else {
        total_mins = (hours + 12) * 60 + mins;
    }
    
    if (total_mins < 532)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if (total_mins < 631)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if (total_mins < 723)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    else if (total_mins < 804)
        printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.");
    else if (total_mins < 893)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    else if (total_mins < 1043)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    else if (total_mins < 1223)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

    return 0;
}
