/**
 * Write a program that sorts a series of words
 * entered by the user:
 *
 * Enter word: foo
 * Enter word: bar
 * Enter word: baz
 * Enter word: quux
 * Enter word:
 *
 * In sorted order: bar baz foo quux
 *
 * Assume that each word is no more than 20 characters long.
 * Stop reading when the user enters an empty word.
 * (i.e presses Enter without entering a word). Store
 * each word in a dynamically allocated string, using an
 * array of pointers to keep track of the strings, as in the
 * remind2.c program (Section 17.2). After all words have
 * been read, sort the array (using any sorting technique)
 * and then use a loop to print the words in sorted order.
 * Hint: Use the read_line function to read each word,
 * as in remind2.c.
 */

// Preprocessing Directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define MAX_WORD_LEN 20
#define MAX_NUM_STR 50

// External Variables
char *str[MAX_NUM_STR], char_save;
int char_count, i, word_count = 0;

// Function Prototypes
int compare (const void*, const void*);

// Function Definitions
int main(void)
{
    for (i = 0; i < MAX_NUM_STR; i++) {
        str[i] = malloc(sizeof(char) * 21);

        printf("Enter word: ");

        char_count = read_line(str[i], MAX_WORD_LEN);

        word_count++;

        if (char_count == 0) {
            break;
        }
    }

    if (i == MAX_NUM_STR) {
        printf("string pointer array full %d:%d", i, MAX_NUM_STR);
    }

    qsort(str, word_count, sizeof(str[i]), compare);

    printf("In sorted order: ");
    for (i = 0; i < word_count; i++) {
        printf("%s ", str[i]);
    }
    return 0;
}

int compare (const void* a, const void* b)
{
    return strcmp(a,b);
}


