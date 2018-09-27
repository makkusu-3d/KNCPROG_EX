/* The prototypical Internet newbie is a fellow BIFF,
 * who has a unique way of writing messages. Here's
 * a typical BIFF communique:
 *
 * H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!!
 *
 * Write a "BIFF filter" that reads a message entered
 * by the user and translates it into BIFF-speak:
 *
 * Enter message: Hey dude, C is rilly cool
 * In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!
 *
 * Your program should convert the message to
 * upper-case letters, substitute digits for certain
 * letter (A->4,B->8,E->3,I->1,O->0,S->5), and then
 * append 10 or so exclamations marks. Hint:
 * Store the original message in an array of characters,
 * then go back through the array, translating
 * and printing characters one by one.
 *
 */

#include <stdio.h>
#include <ctype.h>

char message[20];
char character;
int i = 0,j;

int main(void)
{
    printf("Enter message: ");
    scanf("%c", &character);

    while (character != '\n') {
        character = toupper(character);
        switch (character) {
            case 'A':
                character = '4';
                break;
            case 'B':
                character = '8';
                break;
            case 'E':
                character = '3';
                break;
            case 'I':
                character = '1';
                break;
            case 'O':
                character = '0';
                break;
            case 'S':
                character = '5';
                break;
        }
        message[i] += character;
        scanf("%c", &character);
        i++;
    }

    printf("In B1FF-speak: ");
    for (j = 0; j < i; j++) {
        printf("%c", message[j]);
    }
    printf("!!!!!!!!!!");

    return 0;
}
