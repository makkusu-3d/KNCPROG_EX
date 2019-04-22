/**
 * Modify the delete_from_list function (Section 17.5) so
 * that its first parameter has type struct node ** (a pointer
 * to a pointer to the first node in a list) and its return type
 * is void. delete_from_list must modify its first argument to
 * point to the list after the desired node has been deleted.
 */

 struct node {
     int value;
     struct node *next;
 };

 void delete_from_list(struct node **list, int n)
 {
     struct node *ptr = *list;

     while(ptr != NULL) {
        if (ptr->value == n) {
            *list = ptr->next;
            free(ptr);
        }
        list = &ptr->next;
        ptr = ptr->next;
     }
 }
