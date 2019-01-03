/**
 * Modify Programming Project 6 from Chapter 10 so that it
 * includes the following function:
 *
 * int evaluate_RPN_expression(const char *expression);
 *
 * The function returns the value of the RPN expression
 * pointed to by expression.
 */

// Preprocessing Directives
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#define STACK_SIZE 100

// External variables
int contents[STACK_SIZE];
int top = 0;
char expression[20] = "";

// Function Prototypes
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

// Function Definition
int main(void)
{
    printf("Input a RPN expression: ");
    scanf("%[^\n]s", expression);

    printf("The evaluated RPN expression: %d",evaluate_RPN_expression(expression));

    return 0;
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

int evaluate_RPN_expression(const char *expression)
{
    int i, pop1, pop2;

    for(i = 0; expression[i] != '\0'; i++) {

        if ((int) expression[i] > 47 && (int) expression[i] < 58) {
            push((int) expression[i] - 48);
        }
        else if (expression[i] == '=') {
            return pop();
        }
        else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            pop1 = pop();
            pop2 = pop();
            switch(expression[i]) {
                case '+': push(pop2 + pop1); /* printf("[(+): %d]", pop2 + pop1); */ break;
                case '-': push(pop2 - pop1); /* printf("[(-): %d]", pop2 - pop1); */ break;
                case '*': push(pop2 * pop1); /* printf("[(*): %d]", pop2 - pop1); */ break;
                case '/': push(pop2 / pop1); /* printf("[(/): %d]", pop2 / pop1); */ break;
            }
        }
    }
}
