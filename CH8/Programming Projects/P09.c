/* Write a program that generates a "random walk" across
 * a 10 x 10 array. The array will contain characters
 * (all '.' initially). The program must randomly "walk"
 * from element to element, always going up, down, left,
 * or right by one element. The elements visited by the
 * program will be labelled with the letter A
 * through Z, in the order visited. Here's an example
 * of the desired output:
 *
 * A . . . . . . . . .
 * B C D . . . . . . .
 * . F E . . . . . . .
 * H G . . . . . . . .
 * I . . . . . . . . .
 * J . . . . . . . Z .
 * K . . R S T U V Y .
 * L M P Q . . . W X .
 * . N O . . . . . . .
 * . . . . . . . . . .
 *
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <stdbool.h>

 #define N 10

 char character;
 int rand_num, i, j, k, m, ex;



 int main(void) {

     srand((unsigned) time(NULL));

     unsigned char array[N][N];

     for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            array[i][j] = '.';
        }
     }

     i = rand() % 10;
     j = rand() % 10;

     array[i][j] = 'A';

     for (character = 'B'; character <= 'Z'; character++) {

        bool case_flag[4] = {0,0,0,0};
      
        ex = 1;
        while (ex) {
            rand_num = rand() % 4;
            switch(rand_num) {

                case 3: // j + 1

                    if (array[i][j + 1] == '.' && j + 1 != 10) {
                        array[i][++j] = character;
                        ex = 0;
                    } else {
                        case_flag[3] = 1;
                    }
                    break;

                case 2: // j - 1

                    if (array[i][j - 1] == '.' && j - 1 != -1){
                        array[i][--j] = character;
                        ex = 0;
                    } else {
                        case_flag[2] = 1;
                    }
                    break;

                case 1: // i + 1

                    if (array[i + 1][j] == '.' && i + 1 != 10) {
                        array[++i][j] = character;
                        ex = 0;
                    } else {
                        case_flag[1] = 1;
                    }
                    break;

                case 0: // i - 1

                    if (array[i - 1][j] == '.' && i - 1 != -1) {
                        array[--i][j] = character;
                        ex = 0;
                    } else {
                        case_flag[0] = 1;
                    }
                    break;
            }
            if (case_flag[0] == 1 && case_flag[1] == 1 && case_flag[2] == 1 && case_flag[3] == 1){
                ex = 0;
                character = 91;
            }
        }
     }

     for (i = 0; i < N; i++) {
        printf("\n");
        for (j = 0; j < N; j++) {
            printf("%c", array[i][j]);
        }
     }
     return 0;
 }


