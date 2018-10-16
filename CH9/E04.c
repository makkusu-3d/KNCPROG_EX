/**
 * Write a function day_of_year (month, day, year)
 * that returns the day of the year (integer between
 * between 1 and 360) specified by the three arguments.
 */

#include <stdio.h>

int month, day, year;

// Function prototype
int day_of_year(int,int,int);

int main(void)
{
    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("The days of the year: %d ", day_of_year(month,day,year));

    return 0;
}

// Function that returns the number of the days
int day_of_year(int month, int day, int year)
{
    int i, day_sum;
    int arr_month[12] = {0,0,29,31,30,31,30,31,31,30,31,30};

    if (year % 4 == 0) {
        arr_month[1] = 29;
    } else {
        arr_month[1] = 28;
    }

    for (i = month - 1; i > 0; i--) {
        day_sum += arr_month[i];
    }

    return day_sum + day;
}
