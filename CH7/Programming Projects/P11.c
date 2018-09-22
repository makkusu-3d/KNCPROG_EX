/* Write a program that takes a first name and last
 * name entered by the user and displays the last
 * name, a comma, and the first initial, followed
 * by a period:
 *
 * Enter a first and last name: Lloyd Fosdick
 * Fosdick, L.
 *
 * The user's input may contain extra spaces before
 * the first name, between the first and last names
 * and after the last name.
 *
 */

 #include <stdio.h>
 #include <stdlib.h>

 char first_initial, surname;

 int main(void)
 {
     printf("Enter a first and last name: ");
     scanf(" %c", &first_initial);

     while(getchar() != ' '){
        ;
     }

     scanf(" %c", &surname);
     while(surname != '\n'){
        printf("%c", surname);
        scanf("%c", &surname);
     }

     printf(", %c.", first_initial);

     return 0;
 }
