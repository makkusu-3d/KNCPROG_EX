#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "extern.h"
#include <stdbool.h>

void make_empty(struct node *);
bool is_empty(struct node *);
bool push(struct node *, int);
int pop(struct node *);

#endif // STACK_H_INCLUDED
