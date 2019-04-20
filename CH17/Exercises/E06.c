// Modify delete_from_list function so that it uses
// only one pointer variable instead of two (cur and prev)

// Preprocessing Directives
#include <stdio.h>
#include <stdlib.h>

// External Variables
struct node {
    int value;
    struct node *next;
};

struct node *first = NULL;

// Function Prototypes
void delete_from_list(struct node **list, int n);
struct node *add_to_list(struct node *list, int n);
void print_list(struct node *list);
struct node *input_for_list(struct node *list);

// Function Definition
int main()
{
    int n;

    first = input_for_list(first);

    printf("What number do you want to delete from the list: ");
    scanf("%d", &n);

    delete_from_list(&first, n);

    printf("\n address of first just before %d \n", first);

    print_list(first);

    return 0;
}

struct node *add_to_list(struct node *list, int n)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = n;
    new_node->next = list;

    return new_node;
};

void print_list(struct node *list)
{
    int i = 0;

    printf("List address within print_list %d \n", list);

    printf("Printing out the list saved: ");
    for (;list != NULL; list = list->next) {
        printf("\n %d \n", list->value);
        printf("\n print list node no. : %d", i++);
        printf("\n address %d", list);
        if (list->next == NULL) {
            printf("\nNext Node is null \n");
        }
    }
}

struct node *input_for_list(struct node *list)
{
    int n;
    struct node *second;

    for (;;) {
        printf("Enter a list number: ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        list = add_to_list(list, n);
        printf("address of inputted: %d \n", list);
    }
    return list;
}

void delete_from_list(struct node **pptr, int n)
{      
    struct node *ptr = *pptr;

    while (ptr)
    {
        if (ptr->value == n)
        {
            *pptr = ptr->next;
            free(ptr);
            break;
        }
        pptr = &ptr->next;
        ptr = ptr->next;
    }
}
