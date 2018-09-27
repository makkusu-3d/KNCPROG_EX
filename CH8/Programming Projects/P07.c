/* Write a program that reads a 5 x 5 array of
 * integers and then prints the row sums and the
 * column sums:
 *
 * Enter row 1 8 3 9 0 10
 * Enter row 3 5 17 1 1
 * Enter row 2 8 6 23 1
 * Enter row 15 7 3 2 9
 * Enter row 6 14 2 6 0
 *
 * Row totals: 30 27 40 36 28
 * Columns totals: 34 37 37 32 21
 *
 */

#define N 5

#include <stdio.h>

      //row  column
      //  i  j
int array[N][N], i, j, num, sum = 0;

int main(void)
{
    for (i = 0; i < N; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Row totals: ");
    for (i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            sum += array[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
    
    printf("\n");

    printf("Column totals: ");
    for (j = 0; j < N; j++) {
        for (i = 0; i < N; i++) {
            sum += array[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }
}
