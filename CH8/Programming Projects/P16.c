/* Write a program that tests whether two words are
 * anagrams (permutations of the same letters):
 *
 * Enter first word: smartest
 * Enter second word: mattress
 * The words are anagrams.
 *
 * Enter first word: dumbest
 * Enter second word: stumble
 * The words are not anagrams.
 *
 *......
 */

#include <stdio.h>
#include <ctype.h>
#define N 26

int values[N] = {}, i;
char character;

int main(void)
{
    printf("Enter first word: ");

    for (i = 0;; i++) {
        scanf("%c", &character);
        if (character == '\n') {
            break;
        }
        character = tolower(character);
        if (character >= 'a' && character <= 'z') {
            values[character - 'a']++;
        }
    }

    printf("Enter second word: ");

    for (i = 0;; i++) {
        scanf("%c", &character);
        if (character == '\n') {
            break;
        }
        character = tolower(character);
        if (character >= 'a' && character <= 'z') {
            values[character - 'a']--;
        }
    }

    for (i = 0; i < N; i++) {
        if (values[i] != 0) {
            break;
        }
    }

    if (i == 26) {
        printf("The words are anagrams.");
    } else {
        printf("The words are not anagrams.");
    }

    return 0;
}
