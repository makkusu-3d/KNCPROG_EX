/**
 * Modify Programming Project 14 from Chapter 8 so that is
 * uses a pointer instead of an integer to keep track
 * of the current position in the array that contains the
 * sentence
 */

#define N 100
#include <stdio.h>

int i = 0, j, m, count;
char character;
char sentence[] = {};
char stop[3] = {'.','?','!'};
char store;

int main(void)
{

    printf("Enter a sentence: ");

    char *ptr = sentence;
    char *ptr2 = stop;


    for (;;ptr++)
    {
        scanf("%c", &character);

        for (ptr2 = &stop; ptr2 < &stop + 3; ptr2++) {

            if (character == *ptr2) {
                store = *ptr2;
                goto jump;
            }
        }
        *ptr = character;
    }
    jump:;

    int i = 11;

    printf("The reversal of the sentence: ");

    char *ptr3, *ptr4;

    for (ptr3 = (ptr - 1); ptr3 >= &sentence; ptr3--) {

        if (*(ptr3 - 1) == 0 || *(ptr3 - 1) == ' ') {

            for(ptr4 = ptr3;;ptr4++) {
                if (*ptr4 == 0 || *ptr4 == ' ') {
                    if ((ptr3 - ptr) != 0){
                        printf("%c", *ptr4);
                    }
                    break;
                }
                printf("%c", *ptr4);
            }
        }
    }
    printf("%c", store);

    return 0;
}
