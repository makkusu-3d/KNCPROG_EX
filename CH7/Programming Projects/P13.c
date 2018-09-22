/* Write a program that calculates the average word
 * length for a sentence:
 *
 * Enter a sentence: It was deja vu all over again.
 * Average word length: 3.4
 *
 * For simplicity, your program should consider
 * a punctuation mark to be part of the word to
 * which it is attached. Display the average word
 * length to one decimal place.
 *
 */

#include <stdio.h>

char character;

int char_count = 0, word_count = 0;

int main(void)
{

    printf("Enter a sentence: ");

    for(;;){
        word_count++;
        while((character = getchar()) != ' '){
            if(character == '\n'){
                goto jump;
            }
            char_count++;
        }
    }
    jump:;

    printf("Average word length: %.1f", ( (float) char_count /  word_count));

    return 0;
}
