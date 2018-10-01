/* Modify Programming Project 8 from Chapter 5 so
 * that the departure times are stored in a array
 * and the arrival times are stored in a second array
 * (The times are integers, representing the number
 * of minutes since midnight.) The program will use
 * a loop to search the array of departure times for
 * one closest to the time entered by the user
 */

#include <stdio.h>

int hours, mins, total_mins, i;
int dep[8] = {480, 583, 697, 767, 840, 945, 1140, 1305};
int arr[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

int main(void)
{
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours, &mins);

    total_mins = hours * 60 + mins;

    for(i = 0; i < 7; i++) {

        if (total_mins < (dep[i] + dep[i+1])/2){
            break;
        }
    }
    // 24 Hour clock
    printf("%d", i);
    printf("Closest departure time is %.2d:%.2d, arrival at %.2d:%.2d.", dep[i]/60, dep[i]%60, arr[i]/60,arr[i]%60);

    return 0;
}
