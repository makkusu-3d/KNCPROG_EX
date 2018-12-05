/**
 * (a) Write a function named capitalize that capitalizes
 *     all letters in its argument. The argument will be
 *     null-terminated string containing arbitrary characters
 *     not just letters. Use array subscripting to access
 *     the characters in the string. Hint: Use the toupper
 *     function to convert each character to upper-case.
 */

 // Preprocessing Directives
 #include <stdio.h>
 #include <ctype.h>

 // External Variables
 char str[] = "hello there";

 // Function Prototypes
  void capitalize(char str[]);
  void print_string(void);

 // Function Definitions
 int main(void)
 {
    capitalize(str);
    print_string();
 }
 /*
 void capitalize(char str[])
 {
     for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
     }
 }
 */

 void print_string(void)
{
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}

/**
 * (b) Rewrite the capitalize function, this time using
 *     pointer arithmetic to access the characters in the
 *     string.
 */

 void capitalize(char *str)
 {
     for (char *i = str; *i != '\0'; i++) {
        *i = toupper(*i);
     }
 }
