/**
 * Write a program named reverse.c that echoes its command
 * line arguments in reverse order. Running the program
 * by typing
 *
 * reverse void and null
 *
 * Should produce the following output:
 *
 * null and void
 */


 // Preprocessing Directives
#include <stdio.h>

 // External Variables

 // Function Prototypes
 void reverse_f (char *argv[]);

 // Function Definitions
 int main(int argc, char *argv[])
 {
    reverse_f(argv);
 }

 void reverse_f (char *argv[])
 {
     int i, j;
     for(i = 1; argv[i] != NULL; i++) {;}

     for(j = i - 1; j > 0; j--) {
        printf("%s ", argv[j]);
     }

 }
