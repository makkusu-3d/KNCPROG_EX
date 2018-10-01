/* Modify Programming Project 5 from chapter 7 so
 * that the SCRABBLE values of the letters are
 * stored in an array. The array will have 26
 * letters of the alphabet. For example, element 0
 * of the array will store 1 (because the SCRABBLE
 * value of the letter A is 1) element 1 of the array
 * will store 3 (because the SCRABBLE value of the
 * letter B is 3), and so forth, As each character
 * of the input word is read, the program will
 * use the array to determine the SCRABBLE value
 * of that character. Use an array initializer to
 * set up the array.
 */

#include <stdio.h>

char character;
int sum;

/*
scrabble value

A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z
1,3,3,2,1,4,2,4,1,6,5,1,3,1,1,3,7,1,1,1,1,4,4,6,4,7
*/

int scrabble_value[26] = {1,3,3,2,1,4,
                          2,4,1,6,5,1,
                          3,1,1,3,7,1,
                          1,1,1,4,4,6,
                          4,7};

int main(void)
{
    printf("Enter a word: ");

    do {
        scanf("%c", &character);

        character = toupper(character);

        sum += scrabble_value[(int)character - 65];

    } while (character != '\n');

    printf("Scrabble Value: %d", sum);

    return 0;
}
