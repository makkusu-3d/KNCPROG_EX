/**
 * Write the following function:
 *
 * struct node *find_last(struct node *list, int n);
 *
 * The list parameter points to a linked list. The function
 * should return a pointer to the last node that contains
 * n; it should return NULL if n doesn't appear in the list.
 * Assume that the node structure is the one defined in
 * section 17.5.
 */

struct node {
    int value;
    struct node *next;
};

struct node *find_last(struct node *list, int n)
{
    int count = 0;
    struct node *ptr;
    for (;list != NULL; list = list->next) {
        if (list->value == n) {
            count++;
            ptr = list;
        }
    }
    if (count == 0) {
        return NULL;
    } else {
        return ptr;
    }
};
