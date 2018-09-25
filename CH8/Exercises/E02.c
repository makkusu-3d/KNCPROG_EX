/* The Q&A section shows how to use a letter as an
 * array subscript. Describe how to use a digit
 * (in character form) as a subscript.
 *
 * Just like letters, the digits in character form
 * don't have values with the required 0 to n-1 therefore
 * therefore must be scaled to the proper range. This is
 * done by subtracting 48 from the character. Since
 * '0' is 48 in decimal form in ASCII and 48 - 48 = 0. See
 * program below for an example:
 */

#include <stdio.h>

int digit_count[9], i;
char digit_char;

int main(void)
{
    printf("(Character) digit : ");
    scanf("%c", &digit_char);

    for (i = 0; i < (sizeof(digit_count) / sizeof(digit_count[0])); i++)
        digit_count[i] = i;

    printf("(Numeric) digit: %d", digit_count[digit_char - 48]);

    return 0;
}
