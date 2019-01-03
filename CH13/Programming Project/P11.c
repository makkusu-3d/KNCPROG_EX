/**
 * Modify Programming Project 13 from Chapter 7 so that it
 * includes the following function:
 *
 * double compute_average_word_length(const char *sentence);
 *
 * The function returns the average length of the words
 * in the string pointed to by sentence.
 */

// Preprocessing Directives
#include <stdio.h>

// External Variables
char character, sentence[100] = "";


// Function Prototypes
double compute_average_word_length(const char *sentence);

// Function Definitions
int main(void)
{

    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence);


    printf("Average word length: %.1f", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    int i, word_count = 1, char_count = 0;

    for(i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ') {
            char_count++;
        }
        if (sentence[i] == ' ') {
            word_count++;
        }
    }

    printf("char count: %d\n", char_count);
    printf("word count: %d\n", word_count);
    return (float) char_count /  word_count;
}
