/**
 * Improve the remind.c program of Section 13.5 in the
 * following ways:
 *
 * (a) Have the program print an error message and ignore
 *     day is negative or larger that 31. Hint:
 *     Use the continue statement.
 * (b) Allow the user to enter a day, a 24-hour time,
 *     and a reminder. The printed reminder list should
 *     be sorted first by day, then by time.
 *     (The original program allows the user to enter a
 *      time, but it's treated as part of the reminder.)
 * (c) Have the program print a one-year reminder list.
 *     Require the user to enter days in the form
 *     month/day.
 */

/* Prints a one-month reminder list */

// Preprocessing Directives
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

// Function Prototypes
int read_line(char str[], int n);

// Function Definitions
int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[24], msg_str[MSG_LEN+1];
    char time_str[2];
    int month, day, hours, mins, i, j, num_remind = 0;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter month, day, time (in 24 hours format) and reminder: ");
        scanf("%2d %2d %2d:%2d", &month, &day, &hours, &mins);

        printf("%d", day);

        if (day == 0) {
            break;
        }
        else if (day < 0 || day > 31) {
            printf("Error");
            while (getchar() != '\n') {
                ;
            }
            continue;
        }

        sprintf(day_str, "%2d %2d %2d:%2d", month, day, hours, mins);
        read_line(msg_str, MSG_LEN);


        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcpy(reminders[i], msg_str);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        num_remind++;
    }

    printf("\nYear reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;

}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
