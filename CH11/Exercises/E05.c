/**
 * Write the following function:
 *
 * void split_time(long total_sec, int *hr, int *min, int *sec);
 *
 * total_sec is a time represented as the number of seconds
 * since midnight. hr, min and sec are pointers to variables
 * in which the function will store the equivalent time in
 * hours (0-23), minutes (0-59), and seconds (0-59),
 * respectively.
 */

// Preprocessing Directive
#include <stdio.h>

// Type definition

// Declaration of external variables
int total_sec, hr, min, sec;

// Function Prototype
void split_time(long, int *, int *, int *);

// Function Definitions
int main(void)
{
    printf("Input seconds to be converted into hours, minutes and seconds: ");
    scanf("%ld", &total_sec);

    split_time(total_sec, &hr, &min, &sec);

    printf("Hours: %d | Minutes: %d | Seconds: %d", hr, min, sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec % (*hr * 3600)) / 60;
    *sec = (total_sec % (*hr * 3600 + *min * 60));
}

