/**
 * Some calculators (notably those from Hewlett - Packard)
 * use a system of writing mathematical expressions known
 * as Reverse Polish Notation (RPN). In this notation,
 * operators are placed after their operands instead of
 * between their operands. For example, 1 + 2 would be
 * written 1 2 + in RPN, and 1 + 2 * 3 would be written
 * 1 2 3 * +. RPN expressions can easily be evaluated
 * using a stack. The algorithm involves reading the
 * operators and operands in an expression from left to
 * right, performing the following actions:
 *
 *  When an operand is encountered, push it onto the stack
 *  When an operator is encountered, pop its operands from
 *  the stack, perform the operation on those operands, and
 *  then push the result onto the stack.
 *
 * Write a program that evaluates RPN expressions. The operands
 * will be single-digit integers. The operators are +,-,*,/,
 * and =. The = operator causes the top stack item to be
 * displayed; afterwards, the stack is cleared and the user
 * is prompted to enter another expression. The process
 * continues until the user enters a character that is not an
 * operator or operand:
 *
 * Enter an RPN expression: 1 2 3 * + =
 * Value of expression: 7
 * Enter an RPN expression: 5 8 * 4 9 - / =
 * Value of expression: -8
 *
 * If the stack overflows, the program will display the
 * message Expression is too complex and terminate. If
 * the stack underflows (because of an expression such as
 * 1 2 + +), the program will display the message Not enough
 * operands in expression and terminate. Hints: Incorporate the
 * the stack code from section 10.2 into your program. Use
 * scanf(" %c, &ch) to read the operators and operands.
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

/* Function Prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
bool rpn_function(void);

/* external variables */
int contents[STACK_SIZE];
int top = 0;

int main(void)
{
    for(;;) {
        if (rpn_function() == false) {
            break;
        }
    }
}



void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("\nStack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("\nNot enough operands in expression\n");
    exit(EXIT_FAILURE);
}

bool rpn_function(void)
{
    char ch; 
    int pop1, pop2;
    printf("Enter an RPN expression: ");
    for(;;) {
        scanf(" %c", &ch);
        if ((int) ch > 47 && (int) ch < 58) {
            /* printf("[push: %d]", ch - 48); */
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
