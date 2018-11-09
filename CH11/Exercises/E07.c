/**
 * Write the following function:
 *
 * void split_date(int day_of_year, int year,
 *                 int *month, int *day);
 *
 * day_of_year is an integer between 1 and 366, specifying
 * a particular day within the year designated by
 * year. month and day point to variables in which the function
 * will store the equivalent month (1-12) and day within that
 * month (1-31).
 */


// Preprocessing Directives
#include <stdio.h>
#include <stdbool.h>

// Declarations of External Variables
int ex_day_of_year, ex_year, ex_month, ex_day;

// Function Prototypes
void split_date(int day_of_year, int year,
                int *month, int *day);
void specify_day(void);
void print_days(void);

// Function Definitions
int main(void)
{

    specify_day();
    split_date(ex_day_of_year, ex_year, &ex_month, &ex_day);
    print_days();
    
    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)

{
    bool leap_year = false;
    int days_month_array[12] = {31,28,31,30, 31,30,31,31, 30,31,30,31};
    int sum_days, i;

    if (year % 4 == 0) {
        leap_year = true;

        if (year % 100 == 0) {
            leap_year = false;
        }
        if (year % 400 == 0) {
            leap_year = true;
        }

    }
    if (leap_year) {
        days_month_array[2] = 29;
    }
    for (i = 0; i < 12; i++) {
        sum_days += days_month_array[i];
        if (sum_days > day_of_year) {
            sum_days -= days_month_array[i];
            break;
        }
    }

    printf("\n", i);
    printf("\n", day_of_year - sum_days);


    *month = i;
    *day = (day_of_year - sum_days);
}


void specify_day(void)
{
    printf("Enter the day of the year: ");
    scanf("%d", &ex_day_of_year);

    printf("Enter the year: ");
    scanf("%d", &ex_year);
}


void print_days(void)
{
    printf("\nEquivalent Month: %d | Day within that Month: %d ", ex_month, ex_day);
}

