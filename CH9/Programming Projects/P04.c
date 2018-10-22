/**
 * Modify Programming Project 16 from Chapter 8 so that it includes
 * the following functions:
 *
 * void read_word(int counts[26]);
 * bool equal_array(int counts1[26], int counts2[26]);
 *
 * main will call read_word twice, once for each of the two words
 * entered by the user. As it reads a word, read_word will use the
 * letters in the word to update the counts array, as described in the
 * original project. (main will declare two arrays, one for each
 * word. These arrays are used to track how many times each letter occurs
 * in the words.) main will then call equal_array, passing it the
 * two arrays, equal_array will return true if the elements in
 * the two arrays are identical (indicating that the words are anagrams)
 * and false otherwise.
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define N 26

int counts1[26], counts2[26];

// Function Prototype
void read_word(int counts[]);
bool equal_array(int counts1[], int counts2[]);

int main(void)
{
    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    printf("Value = 1: Identical - Value = 0: Non-Identical");
    printf("\nValue = %d", equal_array(counts1, counts2));
    return 0;
}



void read_word(int counts[26])
{
    int i;
    char character;

    for (i = 0;; i++) {
        scanf("%c", &character);
        if (character == '\n') {
            break;
        }
        character = tolower(character);
        if (character >= 'a' && character <= 'z') {
            counts[character - 'a']++;
        }
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;

    for (i = 0; i < 26; i++) {
        counts1[i] -= counts2[i];
    }

    for (i = 0; i < 26; i++) {
        if (counts1[i] < 0 || counts1[i] > 0) {
            return false;
        }
    }
    return true;
}
