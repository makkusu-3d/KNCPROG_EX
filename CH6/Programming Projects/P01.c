/* Write a program that finds the largest in a series of numbers entered
 * by the user. The program must prompt the user to enter number one by one.
 * When the user enters 0 or a negative number, the program must display the
 * largest non-negative number entered.
 *
 * Enter a number: 60
 * Enter a number: 38.3
 * Enter a number: 4.89
 * Enter a number: 100.62
 * Enter a number: 75.2295
 * Enter a number: 0
 *
 * The largest number entered was 100.62
 *
 * Notice that the number aren't necessarily integers
 */

#include <stdio.h>

int main(void)
{
    float num, save_num = 0;

    for(;;){

        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > save_num)
            save_num = num;
        else if (num == 0.0f)
            break;
    }

    printf("The largest number entered was %.2f", save_num);

    return 0;
}
