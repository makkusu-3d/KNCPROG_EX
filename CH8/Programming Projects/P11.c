/* Modify Programming Project 4 from Chapter 7 so
 * that the program labels its output:
 *
 * Enter phone number: 1-800-COL-LECT
 * In numeric form: 1-800-265-5328
 *
 * The program will need to store the phone
 * number (either in its original form or in its
 * numeric form) in an array of characters until it
 * can be printed. You may assume that the phone
 * number is no more than 15 characters long.
 */

#include <stdio.h>
#define N 15



int main(void)
{
    char ph_num[N] = {};
    char alpha[26] = {'A','B','C','D','E',
                      'F','G','H','I','J',
                      'K','L','M','N','O',
                      'P','Q','R','S','T',
                      'U','V','W','X','Y',
                      'Z'};

    char num[] = {'2','2','2','3','3','3',
                  '4','4','4','5','5','5',
                  '6','6','6','7','7','7',
                  '8','8','8','9','9','9'};
    
    char character;
    int i, j;

    for (i = 0; i < N; i++) {
        scanf("%c", &character);
        ph_num[i] = character;
        if (ph_num[i] == '\n'){
            break;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < 26; j++) {
            if (ph_num[i] == alpha[j]) {
                ph_num[i] = num[j];
                break;
            }
        }
    }

    for(i = 0;;i++){
        if (ph_num[i] == '\n'){
            break;
        }
        printf("%c", ph_num[i]);
    }

    return 0;
}
