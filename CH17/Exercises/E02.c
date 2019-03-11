/**
 * Write a function named duplicate that uses dynamic
 * storage allocation to create a copy of a string.
 * For example, the call
 *
 * p = duplicate(str);
 *
 * Would allocate space for a string of the same length
 * as str, copy the contents of str into the new string
 * , and return a pointer to it. Have duplicate return a
 * null pointer if the memory allocation fails.
 */

 // Preprocessing Directives
 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h>

 // External Variables
 char *str2 = "String copy";

 // Function Prototypes
 char *duplicate(char *str);
 char *p;

 // Function Definitions
 int main(void)
 {
     p = duplicate(str2);
     printf("\n%s", p);

     return 0;
 }

 char *duplicate(char *str)
 {
    char *p;

    p = malloc(strlen(str)+1);

    if (p == NULL) {
        return NULL;
    }
    strcpy(p,str);

    return p;
 }
