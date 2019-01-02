/**
 * Modify Programming Project 11 from Chapter 5 so that it
 * uses arrays containing pointers to strings instead
 * of switch statements. For example, instead of using
 * a switch statement to print the word for the first
 * digit, use the digit as an index into an array
 * that contains the strings "twenty", "thirty", and
 * so forth.
 */

// Preprocessing Directives
#include <stdio.h>

// External Variables
int digit_1, digit_2;

const char *number_set_1[] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
const char *number_set_2[] = {"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
const char *number_set_3[] = {"-one","-two","-three","-four","-five","-six","-seven","-eight","-nine"};

// Function Prototypes

// Function Definitions
int main(void)
{

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &digit_1, &digit_2);

    printf("You entered the number: ");



    if (digit_1 < 2){
        printf("%s ", number_set_1[digit_2]);
    } else {
        printf("%s ", number_set_2[digit_1 - 2]);
        printf("%s ", number_set_3[digit_2 - 1]);
    }

    return 0;
}
