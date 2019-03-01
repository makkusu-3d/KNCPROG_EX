#include <stdio.h>
#define N 8

int hours, mins, total_mins;

struct times {
    int depart_time_min;
    char *dep_time;
    char *arr_time;
};

struct times times_array[N] = {{532,  " 8:00 a.m", "10:16 a.m"},
                              {631,  " 9:43 a.m", "11:52 a.m"},
                              {723,  "11:19 a.m", " 1:31 p.m"},
                              {804,  "12:47 a.m", " 3:00 p.m"},
                              {893,  " 2:00 p.m", " 4:08 p.m"},
                              {1043, " 3:45 p.m", " 5:55 p.m"},
                              {1223, " 7:00 p.m", " 9:20 p.m"},
                              {1300, " 9:45 p.m", "11:58 p.m"}};



int main(void)
{
    int i;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours, &mins);

    total_mins = hours * 60 + mins;

    for (i = 0; i < N; i++) {
        if (times_array[i].depart_time_min > total_mins) {
            printf("Closest departure time is %s, arriving at %s.", times_array[i].dep_time, times_array[i].arr_time);
            break;
        }
    }
    return 0;
}
