#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
    line[0] = '\0';
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    if  (num_words > 0) {
        line[line_len] = ' ';
        line[line_len+1] = '\0';
        line_len++;
    }
    strcat(line, word);
    line_len += strlen(word);
    num_words++;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(int choose)
{
    printf("\nFunction Start\n");
    int extra_spaces, i, j, new_num_words, space_array_num = 0;
    int spaces_array[num_words];

    extra_spaces = MAX_LINE_LEN - line_len; // We know how many extra spaces that are at the start
                                            // extra spaces is the number of spaces to be
                                            // distributed
    printf("\nextra_spaces: %d\n", extra_spaces);
    new_num_words = num_words;
    printf("\nnew_num_words: %d\n", new_num_words);

    if (choose == 0) {
        printf("\nUpward Tendency Array\n");

        /** Upward Tendency Array **/
        /** ------------------------------------------------**/
        /** Not exiting **/
        for (i = 0; i < num_words; i++) {
            printf(" \ni value: %d", i);
            printf(" \nnum_word: %d ", num_words);
            spaces_array[i] = extra_spaces / (new_num_words - 1);
            extra_spaces -= spaces_array[i];
            printf(" \nspaces_array: %d ", spaces_array[i]);
            new_num_words--;
        }
        /** ------------------------------------------------**/

    } else {
        printf("\nDownward Tendency Array");
        /** Downward Tendency Array **/
        /** ------------------------------------------------**/
        /** Not exiting **/
        for (i = num_words - 1; i >= 0 ; i++) {
            printf("%d", num_words);
            spaces_array[i] = extra_spaces / (new_num_words - 1);
            extra_spaces -= spaces_array[i];
            new_num_words--;
            printf("%d", spaces_array[i]);
        }
        /** ------------------------------------------------**/
    }
    printf("\nStart Printing\n");
    for (i = 0; i < line_len; i++) {
        if (line[i] != ' ') {
            putchar(line[i]);
        } else {
            for (j = 1; j < spaces_array[space_array_num++] + 1; j++) {
                putchar(' ');
            }
        }
    }
    putchar('\n');
    printf("\nFunction End\n");
}

void flush_line(void)
{
    if (line_len > 0)
        puts(line);
}




