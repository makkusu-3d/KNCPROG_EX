/**
 * Modify Programming Project 5 from Chapter 7 so that
 * it includes the following function:
 *
 * int compute_scrabble_value(const char *word);
 *
 * The function return the SCRABBLE value of the string
 * pointed to by word.
 */

// Preprocessing Directives
#include <stdio.h>
#include <ctype.h>

// External Variables
char word[20] = "";

// Function Prototypes
int compute_scrabble_value(const char *word);

// Function Definitions
int main(void)
{
    printf("Enter a word: ");
    scanf("%s", word);

    printf("The scrabble sum: %d", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int sum = 0, i;

    for (i = 0; word[i] != '\0'; i++) {

        switch (toupper(word[i])){

            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                sum += 1;
                break;
            case 'D': case 'G':
                sum += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                sum += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J': case 'X':
                sum += 6;
                break;
            case 'Q': case 'Z':
                sum += 7;
                break;
        }
    }

    return sum;
}
