/* Write a program that reverses the words in
 * a sentence:
 *
 * Enter a sentence: you can case a swallow can't you?
 * Reversal of sentence: you can't swallow a cage can you?
 *
 * Hint: Use a loop to read the characters one by
 * one and store them in a one-dimensional char
 * array. Have the loop stop at a period, question
 * mark, or exclamation point (the "terminating-
 * character"), which is saved in a separate char
 * variable. Then use a second loop to search backward
 * through the array for the beginning of the last
 * word. Print the last word, then search backward
 * for the next-to-last word. Repeat until the
 * beginning of the array is reached. Finally,
 * print the terminating character.
 */

#define N 100
#include <stdio.h>

int i, j, m,  count;
char character;
char sentence[] = {};
char stop[3] = {'.','?','!'};
char store;

int main(void)
{

    printf("Enter a sentence: ");

    for (i=0;;i++) {
        scanf("%c", &character);
        for (j = 0; j < 3; j++) {
            if (character == stop[j]) {
                store = stop[j];
                goto jump;
            }
        }
        sentence[i] = character;
    }
    jump:;

    printf("The reversal of the sentence: ");

    for (j = i - 1; j >= 0; j--) {

        if (sentence[j-1] == 0 || sentence[j-1] == ' ') {

            for (m=j;;m++) {
                if (sentence[m] == 0 || sentence[m] == ' ') {
                    if (j != 0) {
                        printf("%c", sentence[m]);
                    }
                    break;
                }
                printf("%c",sentence[m]);
            }
        }
    }

    printf("%c", store);

    return 0;
}
