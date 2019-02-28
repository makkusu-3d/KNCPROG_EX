/**
 * Write a program that asks the user to enter an international
 * dialing code and then looks it up in the country_codes
 * array (see Section 16.3), If it finds the code, the
 * program should display the name of the corresponding
 * country; if not, the program should print an error
 * message.
 */

// Preprocessing Directives
#include <stdio.h>
#include "country_code.h"
#define N 100

// External Variables
int d_code, i, yes_no, a;

// Function Definitions
int main(void)
{
    for(;;) {
        printf("\nEnter international dialing code: ");
        scanf("%d", &d_code);

        for (i = 0; i < N; i++) {
            if (country_codes[i].code == d_code) {
                printf("\n%s\n", country_codes[i].country);
                break;
            }
        }
        if (i >= N) {
            printf("\nError: Invalid Number\n");
        }

        for (;;) {
            printf("\nDo you want to continue? (1:yes/0:no): ");

            scanf("%d", &yes_no);

            if (yes_no == 0 || yes_no == 1) {
                break;
            } else {
                printf("\nWrong answer value\n");
            }

        }
        if (yes_no == 0) {
            break;
        }
    }

    return 0;
}
