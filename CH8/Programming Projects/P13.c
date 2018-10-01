/* Modify Programming Project 11 from Chapter 7 so
 * that the program labels its output:
 *
 * Enter a first and last name: Lloyd Fosdick
 * You entered the name: Fosdick, L.
 *
 * The program will need to store the last name
 * (but not the first name) in an array of
 * characters until it can be printed. You
 * may assume that the last name is no more than
 * 20 characters long.
 */
 
#define N 20
#include <stdio.h>

char first_initial, characters;
char last_name[N] = {};
int i, j;

int main(void)
{
    printf("Enter a first and last name: ");
    first_initial = getchar
    
    while (getchar() !=  ' ') {
        ;
    }

    for(i=0;;i++) {
        scanf("%c", &characters);
        if (characters == '\n'){
            break;
        }
        last_name[i] = characters;
    }

    for (j = 0; j < i; j++) {
        printf("%c", last_name[j]);
    }

    printf(", %c", first_initial);

    return 0;
}
