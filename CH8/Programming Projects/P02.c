/* Modify the repdigit.c program of Section 8.1
 * so that it prints a table showing how many
 * times each digit appears in the number
 *
 * Enter a number: 41271092
 * Digit:      0 1 2 3 4 5 6 7 8 9
 * Occurrences 1 2 2 0 1 0 0 1 0 1
 */

 #include <stdbool.h>
#include <stdio.h>

int store_digit[], i, j, array_size = 0;

int main(void)
{
    int digit_seen[10] = {};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    i = 0;
    while (n > 0) {
         store_digit[i] = n % 10;
         n /= 10;
         array_size++;
         i++;
    }

    for (i = 0; i < array_size; i++) {
        digit_seen[store_digit[i]] += 1;
    }

    printf("Digit:       ");
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\nOccurrences: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", digit_seen[i]);
    }
    return 0;
}
