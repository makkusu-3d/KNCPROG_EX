/**
 * Let f be the following function:
 *
 * int f(char *s, char *t)
 * {
 *    char *p1, *p2;
 *
 *    for (p1 = s; *p1; p1++) {
 *        for (p2 = t; *p1; p1++)
 *           if (*p1 == *p2) break;
 *        if (*p2 == '\0') break;
 *    }
 *    return p1 - s;
 *  }
 *
 *  (a) What is the value of f("abcd","babe")?
 *  (b) What is the value of f("abcd","bcd")?
 *  (c) In general, what value does f return
 *      when passed two strings s and t?
 */


/**
 * Predicted Outcomes:
 *
 * (a) The return value is: -1
 * (b) The return value is:  0
 * (c) It returns the number of matching characters
 *     between the two passed strings.
 */

 // Preprocessing Directives
 #include <stdio.h>

 // External Variables

 // Function Prototypes
 int f(char *s, char *t);

 // Function Definitions
 int main(void)
 {
     printf("%d", f("abcd", "babc"));

     return 0;
 }

 int f(char *s, char *t)
 {
    char *p1, *p2;

    for (p1 = s; *p1; p1++) {
        for (p2 = t; *p2; p2++)
            if (*p1 == *p2) break;
        if (*p2 == '\0') break;
        }
        return p1 - s;
 }
