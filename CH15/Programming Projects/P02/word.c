#include <stdio.h>
#include <string.h>
#include "word.h"

#define MAX_WORD_LEN 20

int read_char(void)
{
    int ch = getchar();

    if (ch == '\n' || ch == '\t')
        return ' ';
    return ch;
}

void read_word(char *word, int len)
{
    int ch, pos = 0;
    int word_len = strlen(word);


    while ((ch = read_char()) == ' ')
        ;
    while (ch != ' ' && ch != EOF) {
            if (pos < len-1)
                word[pos++] = ch;
            ch = read_char();
    }
    if (pos == len - 1) {
        word[pos++] = '*';
    }
    word[pos] = '\0';
}

