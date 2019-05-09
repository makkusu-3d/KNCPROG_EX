/**
 * Modify the justify program of Section 15.3 by rewriting
 * the line.c file so that it stores the current line
 * in a linked list. Each node in the list will store
 * a single word. The line array will be replaced by
 * a variable that points to the node containing the first
 * word. This variable will store a null pointer whenever
 * the line is empty.
 */

#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 20
#define MAX_MOD_WORD_LEN 20

struct node {

    char word[MAX_WORD_LEN];
    struct node* next;
};

struct node* line = NULL, *prev, *cur;


int line_len = 0;
int num_words = 0;

struct node* clear_line(struct node* line)
{
    for (prev = NULL, cur = line;
         cur != NULL;
         prev = cur, cur = cur->next)
    {
        free(prev);
    }

    line_len = 0;
    num_word = 0;

    return NULL;
}

struct node* add_word(const char *word, struct node* line)
{
    struct node* new_node;
    char modified_word[MAX_MOD_WORD_LEN];

    strcat

    if (num_word > 0) {
        new_node = malloc(sizeof(struct node));
        // Add a space after the word example "word "
        new_node->word = word;
        new_node->next = line;
        line_len++;
    }

    line_len += strlen(word);
    num_words++;

    return new_node;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(struct node* line)
{
    int extra_spaces, spaces_to_insert, i, j;

    extra_spaces = MAX_LINE_LEN - line_len;

    for (cur = line; cur != NULL; cur = cur->next) {
        printf("%s")
        spaces_to_insert = extra_spaces / (num_words - 1);
        for (j = 1; j < spaces_to_insert + 1; j++)
            putchar(' ');
        extra_spaces -= spaces_to_insert;
        num_words--;
    }
    putchar('\n');
}

// Since we are using a struct node and not line array
// flush line is not needed
void flush_line(void)
{
    if (line_len > 0)
        puts(line);
}
