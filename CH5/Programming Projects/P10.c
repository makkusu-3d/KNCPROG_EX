/* Using the switch statement, write a program that converts a numerical
 * grade into a letter grade:
 *
 * Enter numerical grade: 84
 * Letter grade: B
 *
 * Use the following grading scale: A=90-100, B-80-89, C=70-79, D=60-69,
 * F = 0-59.
 * Print an error message if the grade is larger than 100 or less than 0.
 * Hint: Break the grade into two digits, then use a switch statement
 * to test the ten's digit.
 *
 */

#include <stdio.h>

int grade;
char ltr;

int main(void)
{
    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    grade /= 10;

    printf("%d", grade);

    // Using ASCII value for letter
    switch (grade){
        case 0: case 1: case 2: case 3: case 4: case 5:
            ltr = 70;
            break; // F
        case 6:
            ltr = 68;
            break; // D
        case 7:
            ltr = 67;
            break; // C
        case 8:
            ltr = 66;
            break; // B
        case 9: case 10:
            ltr = 65;
            break; // A
    }
    
    // Using %c which displays the ASCII Character using the value
    printf("Letter grade: %c", ltr);

    return 0;
}
