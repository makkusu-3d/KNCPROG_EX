/**
 * Section 15.2 describes a file, stack.c, that provides
 * functions for storing integers in a stack. In that
 * section, the stack was implemented as an array.
 * Modify stack.c so that a stack is now stored
 * as a linked list.
 *
 * Replace the contents and top
 * variables by a single variable that points to the
 * first node in the list (the "top" of the stack)
 *
 * Write the functions in stack.c so that they use
 * this pointer. Remove the is_full function,
 * instead having push return either true
 * (if memory was available to create a node)
 * or false (if not)
 */

// Preprocessing Directives
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "extern.h"

 // External Variables
struct node *first = NULL;

#include "stack.h"
#include "print.h"

// Function Definitions
int main(void)
{
    int input, n;
    bool exit_program = false;

    for(;;) {
        printf("\nMake list empty         = 1\n");
        printf("Is list empty?          = 2\n");
        printf("Push new node into list = 3\n");
        printf("Pop value from list     = 4\n");
        printf("Print list              = 5\n");
        printf("Exit program            = 0\n\n");

        scanf("%d", &input);
        if (input == 3) {
            printf("Input value: ");
            scanf("%d", &n);
            printf("\n");
        }

        switch(input) {
            case 1: make_empty(first);
                    break;

            case 2: printf("Yes: 0 | No: 1 = %d", is_empty(first));
                    break;

            case 3: if (!(push(first, n)))
                    {printf("No space\n");}
                    break;

            case 4: printf("Popped value: %d\n", pop(first));
                    break;

            case 5: print_list(first);
                    break;

            case 0: exit_program = true;
                    break;

            default: printf("Invalid input\n");
        }
        if (exit_program) {
            break;
        }
    }
    return 0;
}

