/**
 * The Q&A section at the end of this chapter shows how
 * the strcmp function might be written using array
 * subscripting. Modify the function to use pointer
 * arithmetic instead.
 */

 // Preprocessing Directives
 #include <stdio.h>

 // External Variables
 char *str = "you";
 char *str2 = "you";

 // Function Prototypes
int strcmp(char *s, char *t);

 // Function Definition
 int main(void)
 {
    if (strcmp(str, str2) < 0) {
        printf("str2 is smaller");
    } else {
        printf("str1 is smaller");
    }
 }

 /** function now with pointer arithmetic */
 int strcmp(char *s, char *t)
 {
     while (*s++ == *t++) {
        if (*s == '\0')
            return 0;
     }
     return *s - *t;
 }



/** Original Function
int strcmp(char *s, char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}
*/
