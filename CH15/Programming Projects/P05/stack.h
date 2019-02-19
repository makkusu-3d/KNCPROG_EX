#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

#endif // STACK_H_INCLUDED
