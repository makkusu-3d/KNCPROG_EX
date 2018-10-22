/**
 * Modify Programming Project 17 from Chapter 8 so that it
 * includes the following functions:
 *
 * void create_magic_square(int n, char magic_square[n][n]);
 * void print_magic_square(int n, char magic_square[n][n]);
 *
 * After obtaining the number n from the user, main will call
 * create_magic_square, passing it an n x n array that is
 * declared inside main, create_magic_square will fill the
 * array with the numbers 1,2, .... n^2 as described in the
 * original project, main will then call print_magic_square,
 * which will display the array in the format described in
 * the original project. Note: If your compiler doesn't
 * support variable-length arrays, declare the array
 * in main to be 99 x 99 instead of n x n and use the
 * following prototypes instead:
 *
 * void create_magic_square(int n, char magic_square[99][99]);
 * void print_magic_square(int n, char magic_square[99][99]);
 */

#include <stdio.h>
#include <stdbool.h>

int n;

// Function Prototype
void create_magic_square(int, char magic_square[][*]);
void print_magic_square(int, char magic_square[][*]);


int main(void)
{
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char magic_square[n][n];

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
     int i, j, m;
     bool flag[4] = {0,0,0,0};

     // Sets entire array to zero
     for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
     }

     // Sets middle top row number to one
     magic_square[0][n/2] = 1;

     printf("\n\n");

     // Sets up the start position
     int x = 0;
     int y = n/2;

     // Loops from 2 to n*n and shifts each number
     // up and to the right, ensuring that is there is
     // a wrap around
     for (i = 2; i <= n*n; i++) {

            // Each position decision is flagged

            // Decides the next row position
            if ((x - 1) < 0) {
                x = n - 1;
                flag[0] = 1; // Flag

            } else {
                x--;         // Flag
                flag[1] = 1;
            }

            // Decides the next column position
            if ((y + 1) == n) {
                y = 0;       // Flag
                flag[2] = 1;

            } else {
                y++;         // Flag
                flag[3] = 1;
            }

            // If the decided position is zero
            // make that move, but if it is not
            // revert back to previous position
            // then just move down a row staying
            // in the column
            if (magic_square[x][y] == 0) {
                magic_square[x][y] = i;

            } else {
            // Reverting back of positions
                if (flag[0] == 1) {
                    x=0;
                }
                if (flag[1] == 1) {
                    x++;
                }
                if (flag[2] == 1) {
                    y=4;
                }
                if (flag[3] == 1) {
                    y--;
                }

            // Setting number below to the i value
            x++;
            magic_square[x][y] = i;

            }

            // Resetting the flag array to zero
            for (m = 0; m < 4; m++) {
                flag[m] = 0;
            }
     }
}

void print_magic_square(int n, char magic_square[n][n])
{
    int i, j;
    // Print out the magic square array
     for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", magic_square[i][j]);
        }
        printf("\n");
     }
}
