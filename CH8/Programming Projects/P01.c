/* Modify the repdigit.c program of Section 8.1
 * so that it shows which digits (if any) were
 * repeated:
 *
 * Enter a number: 939577
 * Repeated digits(s): 7 9
 *
 */

#include <stdbool.h>
#include <stdio.h>

int store_digit[], i, j, array_size = 0;

int main(void)
{
    bool digit_seen[10] = {false};
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
        for (j = (i + 1); j < array_size; j++) {
            if (store_digit[i] == store_digit[j]) {
                digit_seen[store_digit[i]] = 1;
            }
        }
    }

    printf("Repeated digit(s): ");

    for (i = 0; i < 10; i++) {
        if (digit_seen[i] == true){
            printf(" %d", i);
        }
    }
    return 0;
}
