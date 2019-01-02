/**
 * Write a program named sum.c that adds up its command-line
 * arguments, which are assumed to be integers. Running
 * the program by typing
 *
 * sum 8 24 62
 *
 * should produce the following output:
 *
 * Total:  94
 *
 * Hint: Use the atoi function to convert each command-line
 * from sting from to integer form
 */

// Preprocessing Directives
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// External Variables
int sum = 0;
// Function Prototypes
int sum_cmd_line(int sum, char *argv[]);

// Function Definitions
int main(int argc, char *argv[])
{
    printf("The sum of command line value: %d", sum_cmd_line(sum, argv));

    return 0;
}

int sum_cmd_line(int sum, char *argv[])
{
    int i;
    for(i = 0; argv[i] != NULL; i++) {
        sum += atoi(argv[i]);
    }
    return sum;
}
