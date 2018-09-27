/* Modify Programming Project 7 so that it
 * prompts for five quiz grades for each of five
 * students, then computes the total score
 * and average score for each student, and the
 * average score, high score, and low score for
 * each quiz.
 *
 */

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
int array[N][N], new_array[N][N];
int highest, lowest, k, i, j, sum = 0;

int main(void)
{
    for (i = 0; i < N; i++) {
        printf("Enter Student %d Grades: ", i + 1);
        for (j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            sum += array[i][j];
        }
        new_array[0][k] = sum;      // Student - Total Score
        new_array[1][k] = sum / 5;  // Student - Average Score
        sum = 0;
        k++;
    }

    k = 0;

    for (j = 0; j < N; j++) {
        sum = 0;
        highest = 0;
        lowest = 1000;
        for (i = 0; i < N; i++) {
            sum += array[i][j];
            if (array[i][j] > highest) {
                highest = array[i][j];
            }
            if (array[i][j] < lowest) {
                lowest = array[i][j];
            }
        }
        new_array[2][k] = sum / 5; // Quiz - Average
        new_array[3][k] = highest; // Quiz - High Score
        new_array[4][k] = lowest;  // Quiz - Low Score

        k++;
    }

    for (i = 0; i < N; i++) {
        switch(i){
            case 0:
                printf("\nStudent - Total score   ");
                break;
            case 1:
                printf("\nStudent - Average score ");
                break;
            case 2:
                printf("\nQuiz - Average score    ");
                break;
            case 3:
                printf("\nQuiz - High score       ");
                break;
            case 4:
                printf("\nQuiz - Low score        ");
                break;
        }
        for (j = 0; j < N; j++) {
            printf("%8d", new_array[i][j]);
        }
    }
}
