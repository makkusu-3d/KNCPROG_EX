/* Write a program that counts the number of vowels
 * (a,e,i,o and u) in a sentence:
 *
 * Enter a sentence: And that's the way it is.
 * Your sentence contains 6 vowels.
 *
 */

#include <stdio.h>
#include <ctype.h>

char character;
int vowel;

int main(void)
{
    printf("Enter a sentence: ");

    for(;;){
        switch(toupper(getchar())){
            case 'A': case 'E': case 'I':
            case 'O': case 'U':
            vowel++;
            break;
            case '\n':
            goto jump;
        }
    }
    jump:;

    printf("Your sentence contains %d vowels:", vowel);

    return 0;
}
