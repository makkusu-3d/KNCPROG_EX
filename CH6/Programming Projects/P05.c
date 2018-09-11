/* Programming Project 1 in Chapter 4 asked you to write a program that
 * displays a two-digit number with its digits reversed. Generalize the
 * program so that the number can have one, two, three, or more digits
 * Hint: Use a do loop that repeatedly divides the number by 10,
 * stopping when it reaches
 *
 */

#include <stdio.h>

int i, j;

int main(void)
{
    printf("Enter any positive integer number: ");
    scanf("%d", &i);

    do {

        j = i % 10;
        printf("%d", j);
        i = i / 10;

    } while (i != 0);
}
