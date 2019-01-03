/**
 * Modify Programming Project 16 from Chapter 8 so that it
 * includes the following function:
 *
 * bool are_anagrams(const char *word1, const char *word2);
 *
 * The function returns true if the strings pointed
 * to by word1 and word2 are anagrams.
 */

// Preprocessing Directives
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define N 26
#define WORD1_SIZE 40
#define WORD2_SIZE 40

// External Variables
int values[N] = {}, i;
char character;
char word1[WORD1_SIZE] = "", word2[WORD2_SIZE] = "";

// Function Prototypes
bool are_anagrams(const char *word1, const char *word2);

// Function Definitions
int main(void)
{
    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    if (are_anagrams(word1, word2)) {
        printf("This is a anagram\n");
    } else {
        printf("This is not a anagram\n");
    }

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    bool is_anagram = true;
    int alphabet_array[26] = {false}, i;

    for (i = 0; word1[i] != '\0'; i++) {
        alphabet_array[tolower(word1[i]) - 'a']++;
    }
    for (i = 0; word2[i] != '\0'; i++) {
        alphabet_array[tolower(word2[i]) - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (alphabet_array[i] > 0) {
            is_anagram = false;
        }
    }

    return is_anagram;
}
