/* Write a program that prints an n x n magic square
 * (a square arrangement of the numbers 1, 2, .., n^2
 * in which the sums of the rows, columns, and diagonal
 * are all the same). The user will specify the value
 * of n:
 *
 * This program creates a magic square of specified
 * size. The size must be an odd number between
 * 1 and 99.
 * Enter size of magic square: 5
 *
 *    17  24   1    8   15
 *    23   5   7   14   16
 *     4   6   13  20   22
 *    10  12   19  21    3
 *    11  18   25   2    9
 */

 #include <stdio.h>
 #include <stdbool.h>

 int n, i, j, m;
 int magic_square;
 // array which store which position decisions took place
 bool flag[4] = {0,0,0,0};

 int main(void)
 {
     printf("This program creates a magic square of a specified size.\n");
     printf("The size must be an odd number between 1 and 99.\n");

     printf("Enter size of magic square: ");
     scanf("%d", &n);

     int magic_square[n][n];

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

     printf("\n\n");

     // Print out the magic square array
     for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d ", magic_square[i][j]);
        }
        printf("\n");
     }
     return 0;
 }
