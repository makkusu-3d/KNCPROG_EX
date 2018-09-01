/* The following table shows the daily flights from one city to another:
 *
 * Departure time   Arrival time_base
 *  8:00 a.m.           10:16 a.m.  480  min
 *                                              531.5  min -> 532
 *  9:43 a.m.           11:52 a.m.  583  min
 *                                              631    min
 * 11:19 a.m.            1:31 p.m.  679  min
 *                                              723    min
 * 12:47 p.m.            3:00 p.m.  767  min
 *                                              803.5  min -> 804
 *  2:00 p.m.            4:08 p.m.  840  min
 *                                              892.5  min -> 893
 *  3:45 p.m.            5:55 p.m.  945  min
 *                                              1042.5 min -> 1043
 *  7:00 p.m.            9:20 p.m.  1140 min
 *                                              1222.5 min -> 1223
 *  9:45 p.m.           11:58 p.m.  1305 min
 *
 * The departure times lies in certain ranges of minutes
 *
 * 532 min |<--------|-------->| 631 min
 *               9:43 a.m
 *
 * Write a program that asks user to enter a time (expressed in hours and
 * minutes, using the 24-hour clock). The program then displays the
 * departure and arrival times for the flight whose departure time is
 * closest to that entered by the user:
 *
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 */

#include <stdio.h>

int hours, mins, total_mins;

int main(void)
{
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours, &mins);

    total_mins = hours * 60 + mins;

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
