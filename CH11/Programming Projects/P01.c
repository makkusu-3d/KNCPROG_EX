/**
 * Modify Programming Project 7 from Chapter 2 so that it
 * includes the following function:
 *
 * void pay_amount(int dollars, int *twenties, int *tens,
 *                 int *fives, int *ones);
 *
 * The function determines the smallest number of $20, $10
 * ,$5, and $1 bills necessary to pay the amount represented
 * by the dollars parameter. The twenties parameter points
 * to a variable in which the function will store the
 * number of $20 bills required. The tens, fives, and ones
 * parameters are similar.
 */

// Preprocessing Directives
#include <stdio.h>


// External Variables
int amount, twenties, tens, fives, ones;

// Function Prototypes
void pay_amount(int, int*, int*, int*, int*);
void enter_amount(void);
void print_notes(void);



// Function Definitions
int main(void)
{
    enter_amount();
    pay_amount(amount, &twenties, &tens, &fives, &ones);
    print_notes();

    return 0;
}



void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    int i;
    int note_array[4] = {20,10,5,1};
    int amount_note[4] = {0,0,0,0};

    for (i = 0; i < 4; i++)
    {
        amount_note[i] = dollars / note_array[i];
        dollars = dollars - amount_note[i] * note_array[i];
    }
    *twenties = amount_note[0];
    *tens     = amount_note[1];
    *fives    = amount_note[2];
    *ones     = amount_note[3];
}

void enter_amount(void)
{
    int value, *p = &amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &value);
    *p = value;
}

void print_notes(void)
{
    printf("\n$20 Bills: %d", twenties);
    printf("\n$10 Bills: %d", tens);
    printf("\n$5  Bills: %d", fives);
    printf("\n$1  Bills: %d", ones);
}
