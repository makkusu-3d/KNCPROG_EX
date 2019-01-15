/**
 * (C99) C programmers often use the fprintf function to
 * write error messages:
 *
 * fprintf(stderr, "Range error: index = %d\n", index);
 *
 * stderr is C's "standard error" stream; the remaining
 * arguments are the same as those for printf, starting
 * with the format string. Write a macro named ERROR
 * that generates the call of fprintf shown above when
 * given a format string and the items to be displayed:
 *
 * ERROR("Range error: index = %d\n", index);
 *
 * Answer:
 * #define ERROR(x,y) fprintf(stderr, x, y)
 */

 // Preprocessing Directives
 #include <stdio.h>

 #define ERROR(x,y) fprintf(stderr, x, y)

 // External Variables
 int index = 10;

 // Function Prototypes

 // Function Definitions
 int main(void)
 {
    ERROR("Range error: index = %d\n", index);
    return 0;
 }
