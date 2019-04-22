/**
 * The following function is supposed to insert a new
 * node into its proper place in an ordered list, returning
 * a pointer to the first node in the modified list.
 * Unfortunately, the function doesn't work correctly in
 * all cases. Explain what's wrong with it and show how
 * to fix it, Assume that the node structure is the
 * one defined in Section 17.5.
 */

 /**
  * If the while condition is false straight away
  * the prev->next will not work and give an error
  * since prev = NULL
  *
  * If the last node in the list has the while condition
  * true again than prev will point to that node and cur
  * will point to a NULL pointer and then when the
  * while condition is assessed again cur->value will give
  * an error
  */

 struct node {
     int value;
     struct node *next;
 };

 struct node *insert_into_ordered_list(struct node *list,
                                       struct node *new_node)
 {

     bool start = false;

     struct node *cur = list, *prev = NULL;

     while (cur->value <= new_node->value) {
        prev = cur;
        cur = cur->next;
        // Catching when cur == NULL
        // and inserting the node just
        // before the NULL
        if (cur == NULL) {
            prev->next = new_node;
            new_node->next = cur;
            return list;
        }
        // True if while statement run once or
        // more
        start = true;
     }

     // Runs if while condition is false from
     // start and insert node at the start of the
     // list
     if(!start) {
        list = new_node;
        new_node->next = cur;
        return list;
     }
     prev->next = new_node;
     new_node->next = cur;
     return list;
 };

// Better version using a double pointer
  struct node *insert_into_ordered_list(struct node *list,
                                       struct node *new_node)
 {
     struct node **pptr = &list, *r_list = list;

     while (list != NULL) {
        if (list->value <= new_node->value) {
            break;
        }
        pptr = &list->next;
        list = list->next;
     }
     *pptr = new_node;
     new_node->next = list;

     return r_list;
 }
