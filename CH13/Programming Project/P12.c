/**
 * Modify Programming Project 14 from Chapter 8 so that
 * it stores the words in a two-dimensional char array
 * as it reads the sentence, with each row of the array
 * storing a single word. Assume that the sentence
 * contains no more than 30 words and no word is more
 * than 20 characters long. Be sure to store a null
 * character at the end of each word so that it
 * can be treated as a string.
 */

// Preprocessing Directives
#include <stdio.h>

// External Variables
int i, j, k = 0, word_count;
char sentence[30][20] = {};
char read_sentence[600] = "";

//Function Definition
int main(void)
{
    printf("Enter a sentence: ");
    scanf("%[^\n]s", read_sentence);

    for (i = 0; read_sentence[i] != '\0'; i++) {

        if (read_sentence[i] == ' ') {
            sentence[j][k] = '\0';
            j++;
            k = 0;
            i++;
        }
        sentence[j][k] = read_sentence[i];
        k++;


    }
    word_count = j + 1;
    for (i = word_count; i >= 0; i--) {
        for (j = 0; sentence[i][j] != '\0'; j++) {
            printf("%c", sentence[i][j]);
        }
        printf(" ");
    }


    return 0;
}
