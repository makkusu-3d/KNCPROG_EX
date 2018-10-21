/**
 * Modify Programming Project 9 from chapter 8 so that it includes
 * the following functions:
 *
 * void generate_random_walk(char walk[10][10]):
 * void print_array(char walk[10][10]);
 *
 * main first calls generate_random_walk, which initializes the array
 * to contain '.' characters and then replaces some of these characters
 * by the letters A through Z, as described in the original project.
 * main then calls print_array to display the array on the screen.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    char walk[10][10];

    generate_random_walk(walk);
    print_array(walk);

    return 0;
}



void generate_random_walk(char walk[10][10])
{
     char character;
     int rand_num, i, j, k, m, ex;

     srand((unsigned) time(NULL));

     for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            walk[i][j] = '.';
        }
     }

     i = rand() % 10;
     j = rand() % 10;

     array[i][j] = 'A';

     for (character = 'B'; character <= 'Z'; character++) {

        bool case_flag[4] = {0,0,0,0};

        // printf("\n\n");
        ex = 1;
        while (ex) {
            rand_num = rand() % 4;
            switch(rand_num) {

                case 3: // j + 1

                    if (walk[i][j + 1] == '.' && j + 1 != 10) {
                        // printf("| %c: j + 1 |\n", character); // Shows step taken in console
                        walk[i][++j] = character;
                        ex = 0;
                    } else {
                        case_flag[3] = 1;
                        // printf("\nCase flag 3: %d\n", case_flag[3]);
                    }
                    break;

                case 2: // j - 1

                    if (walk[i][j - 1] == '.' && j - 1 != -1){
                        // printf("| %c: j - 1 |\n", character); // Shows step taken in console
                        walk[i][--j] = character;
                        ex = 0;
                    } else {
                        case_flag[2] = 1;
                        // printf("\nCase flag 2: %d\n", case_flag[2]);
                    }
                    break;

                case 1: // i + 1

                    if (walk[i + 1][j] == '.' && i + 1 != 10) {
                        // printf("| %c: i + 1  |\n", character); // Shows step taken in console
                        walk[++i][j] = character;
                        ex = 0;
                    } else {
                        case_flag[1] = 1;
                        // printf("\nCase flag 1: %d\n", case_flag[1]);
                    }
                    break;

                case 0: // i - 1

                    if (walk[i - 1][j] == '.' && i - 1 != -1) {
                        // printf("| %c: i - 1 |\n", character); // Shows step taken in console
                        walk[--i][j] = character;
                        ex = 0;
                    } else {
                        case_flag[0] = 1;
                        // printf("\nCase flag 0: %d\n", case_flag[0]);
                    }
                    break;
            }
            if (case_flag[0] == 1 && case_flag[1] == 1 && case_flag[2] == 1 && case_flag[3] == 1){
                ex = 0;
                character = 91;
            }
        }
     }
}

void print_array(char walk[10][10])
{
     for (i = 0; i < 10; i++) {
        printf("\n");
        for (j = 0; j < 10; j++) {
            printf("%c", array[i][j]);
        }
     }
 }
