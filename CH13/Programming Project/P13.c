/**
 * Modify Programming Project 15 from Chapter 8 so that it
 * includes the following function:
 *
 * void encrypt(char *message, int shift);
 *
 * The function expects message to point to a string
 * containing the message to be encrypted;
 * shift represents the amount by which each letter
 * in the message is to be shifted.
 */

// Preprocessing Directives
#include <stdio.h>
#define N 80

// External Variables
char message[N]  = "", character;
int i, array_size = 0, shift;

// Function Prototypes
void encrypt(char *message, int shift);

// Function Definition
int main(void)
{
    printf("Enter message to be encrypted: ");
    scanf("%[^\n]s", message);

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(message, shift);



    return 0;
}

void encrypt(char *message, int shift)
{
    printf("Encrypted message: ");

    for (i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            printf("%c", ((message[i] - 'A') + shift) % 26 + 'A');
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            printf("%c", ((message[i] - 'a') + shift) % 26 + 'a');
        } else {
            printf("%c", message[i]);
        }
    }
}
