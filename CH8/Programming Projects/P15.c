/* One of the oldest known encryption techniques is
 * the Caesar cipher, attributed to Julius Caesar. It
 * involves replacing each letter in a message with
 * another letter that is fixed number of positions
 * later in the alphabet. (If the replacement would
 * go past the letter Z, the cipher "wrap around" to
 * the beginning of the alphabet. For example, if each
 * letter is replaced by the letter two positions
 * after it, then Y would be replaced by A, and Z would
 * be replaced by B.) Write a program that encrypts a
 * message using Caesar cipher. The user will enter the
 * message to be encrypted and the shift amount
 * (the number of positions by which letters
 * should be shifted):
 *
 * Enter message to be encrypted: Go ahead, make my day.
 * Enter shift amount (1-25): 3
 * Encrypted message: Jr dkhdg, pdnh pb gdb.
 *
 */

#include <stdio.h>
#define N 80

char message[N]  = {}, character;
int i, array_size = 0, n;

int main(void)
{
    printf("Enter message to be encrypted: ");
    for (i = 0;; i++) {
        scanf("%c", &character);
        if (character == '\n') {
            break;
        }
        message[i] = character;
        array_size++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("Encrypted message: ");

    for (i = 0; i < array_size; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            printf("%c", ((message[i] - 'A') + n) % 26 + 'A');
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            printf("%c", ((message[i] - 'a') + n) % 26 + 'a');
        } else {
            printf("%c", message[i]);
        }
    }

    return 0;
}
