/* Write a program that asks the user for a two-digit number, then prints
 * the English word for the number:
 *
 * Enter a two-digit number: 45
 * You entered the number forty-five.
 *
 */

#include <stdio.h>

int digit_1, digit_2;

int main(void)
{
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &digit_1, &digit_2);

    printf("You entered the number: ");

    if (digit_1 < 2){
        switch(digit_2){
            case 0:
                printf("Ten");          break;
            case 1:
                printf("eleven");       break;
            case 2:
                printf("twelve");       break;
            case 3:
                printf("thirteen");     break;
            case 4:
                printf("fourteen");     break;
            case 5:
                printf("fifteen");      break;
            case 6:
                printf("sixteen");      break;
            case 7:
                printf("seventeen");    break;
            case 8:
                printf("eighteen");     break;
            case 9:
                printf("nineteen");     break;
        }
    } else {
        switch(digit_1){
            case 2:
                printf("twenty");      break;
            case 3:
                printf("thirty");      break;
            case 4:
                printf("forty");       break;
            case 5:
                printf("fifty");       break;
            case 6:
                printf("sixty");       break;
            case 7:
                printf("seventy");     break;
            case 8:
                printf("eighty");      break;
            case 9:
                printf("ninety");       break;
        }
        switch(digit_2){
            case 1:
                printf("-one");          break;
            case 2:
                printf("-two");          break;
            case 3:
                printf("-three");        break;
            case 4:
                printf("-four");         break;
            case 5:
                printf("-five");         break;
            case 6:
                printf("-six");          break;
            case 7:
                printf("-seven");        break;
            case 8:
                printf("-eight");        break;
            case 9:
                printf("-nine");         break;
        }
    }
    return 0;
}
