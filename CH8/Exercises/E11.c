/* Write a program fragment that declares an
 * 8 x 8 char array checker board and then
 * uses a loop to store the following data into
 * the array (one character per array element)
 *
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 *
 * Hint: The element in row i, column j, should be
 * the letter B if i + j is an even number.
 */

#define N (sizeof(checker_board)/sizeof(checker_board[0][0]))

#include <stdio.h>

char checker_board[8][8];

int i, j;

int main(void)
{
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++){
            if ((i + j + 2) % 2 == 0) {
                checker_board[i][j] = 'B';
            } else {
                checker_board[i][j] = 'R';
            }
        }
    }

    // Testing for the correct output
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}

