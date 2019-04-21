#include "stack.h"
#include "extern.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node *first;

void make_empty(struct node *list)
{
    struct node *temp;
    first = list;

    while(list != NULL) {
        temp = list;
        list = list->next;
        free(temp);
    }
    first = NULL;
}

bool is_empty(struct node *list)
{
    if (list == NULL) {
        return false;
    } else {
        return true;
    }
}

bool push(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));

    if (new_node == NULL) {
        return false;

    } else {
        new_node->value = n;
        new_node->next = list;
        first = new_node;
        return true;
    }
}

int pop(struct node *list)
{
    int n;
    if (list == NULL) {
        return 0;
    }
    n = list->value;
    first = list->next;

    free(list);

    return n;
}
