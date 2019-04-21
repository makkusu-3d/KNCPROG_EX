#include "print.h"
#include "extern.h"
#include <stdio.h>

void print_list(struct node *list)
{
    printf("Printing out the list saved: ");
    for (;list != NULL; list = list->next) {
        printf("%d ", list->value);

        if (list->next == NULL) {
            printf("\nNext Node is null \n");
        }
    }
}
