/**
 * Modify Programming Project 8 from Chapter 5 so that it
 * includes the following function:
 *
 * void find_closest_flight(int desired_time,
 *                         int *departure_time,
 *                         int *arrival_time)
 *
 * This function will find the flight whose departure time
 * is closes to desired_time (expressed in minutes since
 * midnight). It will store the departure and arrival times
 * of this flight (also expressed in minutes since
 * midnight) in the variables pointed to by departure_time
 * and arrival_time, respectively.
 */

// Preprocessing Directives
#include <stdio.h>

// External Variables
int ex_desired_time, ex_departure_time, ex_arrival_time;


// Function Prototypes
void find_closest_flight(int, int*, int*);
int desired_time_input(void);

// Functions Definitions
int main(void)
{

    ex_desired_time = desired_time_input();
    find_closest_flight(ex_desired_time, &ex_departure_time, &ex_arrival_time);
    print_time();

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int i;
    int selection_array[7] = {532,631,723,804,893,1043,1223};
    int departure_time_array[8]  = {480,583,679,767,840,945,1140,1305};
    int arrival_time_array[8]    = {616,712,811,900,968,1075,1280,1438};

    for (i = 0; i < 6; i++) {
        if(desired_time < selection_array[i]) {
            *departure_time = departure_time_array[i];
            *arrival_time   = arrival_time_array[i];
            return;
        }
    }

    *departure_time = departure_time_array[7];
    *arrival_time   = arrival_time_array[7];
}

int desired_time_input(void)
{
    int hours, mins;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours, &mins);

    return (hours * 60 + mins);
}

void print_time(void)
{
    int dep_hours, dep_mins, arr_hours, arr_mins;

    dep_hours = ex_departure_time / 60;
    dep_mins  = ex_departure_time - dep_hours * 60;

    arr_hours = ex_arrival_time / 60;
    arr_mins  = ex_arrival_time - arr_hours * 60;

    printf("Closest departure time is %d:%.2d, arriving at %d:%.2d",dep_hours,dep_mins, arr_hours, arr_mins);
}
