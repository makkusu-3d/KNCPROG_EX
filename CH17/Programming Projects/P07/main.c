/**
 * (C99) Modify the remind2.c program of Section 17.2
 * so that each element of the reminders array is a
 * pointer to a vstring structure (see Section 17.9)
 * rather than a pointer to an ordinary string
 */

/* Prints a one-month reminder list (dynamic string version) */

// Preprocessing Directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 60 /* maximum number of reminders */
#define MSG_LEN 60    /* max length of reminder message */

// External Variables
char day_reminder[MSG_LEN], temp[MSG_LEN];

struct vstring {
    int len;
    char chars[]; /* flexible array member - C99 only */
};


// Function Prototypes
int read_line(char str[], int n);

// Function Definitions
int main(void)
{
    int i = 0, j, num_remind = 0;

    struct vstring *reminder_vstring[MAX_REMIND];

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");

        read_line(day_reminder, MSG_LEN);

        if (day_reminder[0] == '0') {
            break;
        }

        reminder_vstring[i] = malloc(sizeof(struct vstring) + sizeof(char) * strlen(day_reminder) );

        reminder_vstring[i]->len = strlen(day_reminder);

        strcpy(reminder_vstring[i]->chars, day_reminder);

        num_remind++;

        i++;
    }

    for (i = 0; i < num_remind; i++) {
        for (j = 0; j < num_remind - i - 1; j++) {
            if (atoi(reminder_vstring[j]->chars) > atoi(reminder_vstring[j+1]->chars)) {
                strcpy(temp, reminder_vstring[j]->chars);
                strcpy(reminder_vstring[j]->chars, reminder_vstring[j+1]->chars);
                strcpy(reminder_vstring[j+1]->chars,temp);
            }
        }
    }

    for (i = 0; i < num_remind; i++) {
        printf("\n%s", reminder_vstring[i]->chars);
    }

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
