#include <stdbool.h>
#include <stdio.h>
#include "stack.h"
#include "rpn_function.h"

char ch;
int pop1, pop2;

bool rpn_function(void)
{
    printf("Enter an RPN expression: ");
    for(;;) {
        scanf(" %c", &ch);
        if ((int) ch > 47 && (int) ch < 58) {
            push((int) ch - 48);
        }
        else if (ch == '=') {
            printf("Value of expression %d \n", pop());
            make_empty();
            return true;
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            pop1 = pop();
            pop2 = pop();
            switch(ch) {
                case '+': push(pop2 + pop1); /* printf("[(+): %d]", pop2 + pop1); */ break;
                case '-': push(pop2 - pop1); /* printf("[(-): %d]", pop2 - pop1); */ break;
                case '*': push(pop2 * pop1); /* printf("[(*): %d]", pop2 - pop1); */ break;
                case '/': push(pop2 / pop1); /* printf("[(/): %d]", pop2 / pop1); */ break;
            }
        }
        else {
            make_empty();
            return false;
        }
    }
}
