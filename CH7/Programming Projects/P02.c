/* Modify the square2.c program of Section 6.3 so that
 * it pauses after every 24 squares and displays the
 * following message:
 *
 * Press Enter to continue
 *
 * After displaying the message, the program should use
 * getchar to read a character. getchar wont allow the
 * program to continue until the user presses the Enter
 * key
 *
 */

/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    getchar(); // Used to grab the \n entered for
               // for the scanf

    for (i = 1; i <= n; i++){

        printf("%10d%10d\n", i, i * i);

        if (i % 24 == 0){
            printf("Press Enter to continue...");
            getchar();
        }
    }
    return 0;
}

