/**
 * Write the following function, assuming that the time structure
 * contains three members:
 * hours, minutes, and seconds (all of type int).
 *
 * struct time split_time(long total_seconds);
 *
 * total_seconds is a time represented as the number of seconds
 * since midnight, The function returns a structure containing the
 * equivalent time in hours (0-23), minutes (0-59), and seconds
 * (0-59).
 */

/** Test Program **/
// Preprocessing Directive
#include <stdio.h>
#define TOTAL_SECONDS 14532

// External Variables
 struct time {
     int hours;
     int minutes;
     int seconds;
 };

// Function Prototypes
struct time split_time(long);

// Function Definitions
int main(void)
{
    struct time t1;

    t1 = split_time(TOTAL_SECONDS);

    printf("Hours: %d\nMinutes: %d\nSeconds: %d", t1.hours, t1.minutes, t1.seconds);

    return 0;
}

/** Split time function **/
struct time split_time(long total_seconds)
{

    struct time r;

    r.hours = total_seconds / 3600 ;
    total_seconds -= r.hours * 3600;

    r.minutes = total_seconds / 60;
    total_seconds -= r.minutes * 60;

    r.seconds = total_seconds;

    return r;
};
