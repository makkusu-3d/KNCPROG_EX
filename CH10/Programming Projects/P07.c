/**
 * Write a program that prompts the user for a number and
 * then displays the number, using characters to simulate
 * the effect of a seven-segment display:
 *
 * Enter a number: 491-9014
 *
 *  _   _      _   _
 * |_| |_|  | |_| | |  | |_|
 *   |  _|  |  _| |_|  |   |
 *
 * Characters other than digits should be ignored. Write the
 * program so that the maximum number of digits is controlled
 * by a macro named MAX_DIGITS, which has the value 10. If
 * the number contains more than this number of digits,
 * the extra digits are ignored. Hints: Use two external
 * arrays, One is the segments array (see Exercise 6 in
 * chapter 8), which stores data representing the
 * correspondence between digits and segments. The other
 * array, digits, will be an array of characters with 4 rows
 * (since each segmented digit is four characters high)
 * and MAX_DIGITS * 4 columns (digits are three characters
 * wide, but a space is needed between digits for readability)
 * Write your program with four functions: main,
 * clear_digits_array, process_digit, and print_digits_array.
 * Here  are the prototypes for the later three functions:
 *
 * void clear_digits_array(void);
 * void process_digit(int digit, int position);
 * void print_digits_array(void);
 *
 * clear_digits_array will store blank characters into all
 * elements of the digits array, process_digit will store
 * the seven-segment representation of digits into a
 * specified position in the digits array
 * (positions range from 0 to MAX_DIGITS - 1).
 * print_digits_array will display the rows of the digits
 * array, each on a single line, producing output
 * such as that shown in the example.
 */

/* Preprocessing Directives */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_DIGITS 10

/* External variables */

const int segments[MAX_DIGITS][7] = {{1,1,0,1,1,1,1},
                                     {0,0,0,1,0,0,1},
                                     {1,0,1,1,1,1,0},
                                     {1,0,1,1,0,1,1},
                                     {0,1,1,1,0,0,1},
                                     {1,1,1,0,0,1,1},
                                     {1,1,1,6,1,1,1},
                                     {1,0,0,1,0,0,1},
                                     {1,1,1,1,1,1,1},
                                     {1,1,1,1,0,1,1}};



char digits[4][4 * MAX_DIGITS];

/* Function Prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
    int position = 0, digit;
    char ch;

    clear_digits_array();

    printf("Enter a number: ");

    while((ch = getchar()) != '\n')
    {
        if ((int)ch >= 48 && (int)ch <= 57) {
            digit = ((int)ch - 48);
        } else {
            continue;
        }
        printf("%d", digit);
        process_digit(digit, position);
        position++;

    }

    print_digits_array();

    return 0;
}

void clear_digits_array(void)
{
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{
    int i, j, step = 0;

    // The position array assures the correct position
    // takes place when the character array is input
    // into the digits array.
                                //0 1 2  3  4  5  6  7  8  9
    int position_array[10] = {0,4,8,12,16,20,24,28,32,36};

    char character_match[4][4] = {{' ','_',' ',' '},
                                  {'|','_','|',' '},
                                  {'|','_','|',' '},
                                  {' ',' ',' ',' '}};


    char character_copy[4][4];

    // Set all of character_copy array to ' '.
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            character_copy[i][j] = ' ';
        }
    }

    // Creating a character array which toggles the correct segment
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (character_match[i][j] != ' ' && segments[digit][step++] == 1) {
                character_copy[i][j] = character_match[i][j];
            }
        }
    }

    // Adding the previously created array to the digits array
    for (i = 0; i < 4; i++) {
        for (j = position_array[position]; j < position_array[position] + 4; j++) {
            digits[i][j] = character_copy[i][j - position_array[position]];
        }
    }
}

void print_digits_array(void)
{
    int i, j;

    for (i = 0; i < 4; i++) {
        printf("\n");
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            printf("%c", digits[i][j]);
        }
    }
}

