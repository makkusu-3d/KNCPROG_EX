/**
 * Modify Programming Project 6 from Chapter 10 so that
 * it has separate stack.h and stack.c files, as
 * described in Section 15.2
 */

#include <stdbool.h>
#include <stdlib.h>

#include "rpn_function.h"
#include "stack.h"

char ch;

int main(void)
{
    for(;;) {
        if (rpn_function() == false) {
            break;
        }
    }
}
