/**
 * Write the following functions, assuming that the date structure
 * contains three members:
 * month, day, and year (all of type int)
 *
 * (a) int day_of_year(struct date d);
 *
 * Returns the day of the year (an integer between 1 and 366) that
 * corresponds to the date d.
 *
 * (b) int compare_dates(struct date d1, struct date d2);
 *
 * Returns -1 if d1 is an earlier date than d2, +1 if d1 is a later
 * date than d2, and 0 if d1 and d2 are the same.
 */

// Preprocessing Directives
#include <stdio.h>

// External Variables
struct date {
    int month;
    int day;
    int year;
} d1 = { 4,24,2020},
  d2 = {12,24,2005};

// Function Prototypes
int day_of_year(struct date);
int compare_dates(struct date, struct date);

/** Testing Program **/

// Function definitions
int main(void)
{
    printf("d1 Versus d2: %d", compare_dates(d1, d2));

    return 0;
}

/** (a) **/
int day_of_year(struct date d)
{
    int days = 0, i;

    int month_days[12] = {31,28,31, 30,31,30, 31,31,30, 31,30,31};

    if (d.year % 4 == 0) {
        month_days[1] = 29;
    }

    for (i = 0; i < d.month; i++) {
        days += month_days[i];
    }

    return days + d.day;
}

/** (b) **/
int compare_dates(struct date d1, struct date d2)
{
    if (day_of_year(d1) < day_of_year(d2)) {
        return -1;
    } else if (day_of_year(d1) > day_of_year(d2)) {
        return 1;
    } else {
        return 0;
    }
}
