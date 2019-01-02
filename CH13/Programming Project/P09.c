/**
 * Modify Programming Project 10 from Chapter 7 so that
 * it includes the following function:
 *
 * int compute_vowel_count(const char *sentence);
 *
 * The function returns the number of vowels in the string
 * pointed to by the sentence parameter.
 */

 // Preprocessing Directives
#include <stdio.h>
#include <ctype.h>

// External Variables
char sentence[100] = "";

// Function Prototypes
int compute_vowel_count(const char *sentence);

// Function Definitions
int main(void)
{
    printf("Enter a sentence: ");
    scanf("%[^\n]s", sentence); // %s stops at white-space

    printf("Your sentence contains %d vowels:", compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int i, vowel = 0;

    for (i = 0; sentence[i] != '\0'; i++) {
        switch(toupper(sentence[i])) {
            case 'A': case 'E': case 'I':
            case 'O': case 'U':
            vowel++;
            break;
        }
    }

    return vowel;
}
