/** see question in book **/

// Preprocessor Directives
#include <stdio.h>
#include <stdbool.h>

//External Variables
struct date {
    int month;
    int day;
    int year;
} d1, d2;

int ans;

// Function Prototypes
void data_read(int *, int *, int *);
int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);

// Function Definitions
int main(void)
{
    printf("Year 1\n");
    data_read(&d1.month,&d1.day,&d1.year);

    printf("Year 2\n");
    data_read(&d2.month,&d2.day,&d2.year);

    ans = compare_dates(d1,d2);

    if(ans == -1) {
        printf("Year one is shorter than Year two");
    } else if (ans == 1) {
        printf("Year one is longer than year two");
    } else {
        printf("They are equal");
    }
}

void data_read(int *m, int *d, int *y)
{
    int month, day, year;

    printf("Enter the month: ");
    scanf("%d", &month );

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the year: ");
    scanf("%d", &year);

    *m = month;
    *d = day;
    *y = year;

}


 /** day of the year function **/

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

 /** Compare dates function **/

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
