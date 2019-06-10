/**
 * A queue is similar to a stack, except that items are
 * added at one end but removed from the other in a FIFO
 * (first-int, first_out) fashion. Operations on a queue
 * might include:
 *
 * . Inserting an item at the end of the queue
 * . Removing an item from the beginning of the queue
 * . Returning the first item in the queue (without changing
 *                                          the queue)
 * . Returning the last item in the queue (without changing
 *                                         the queue)
 * . Testing whether the queue is empty
 *
 * Write an interface for a queue module in the form of
 * a header file named queue.h.
 */

 // queue.h

 #ifndef QUEUE_H
 #define QUEUE_H

 #include <stdbool.h>

 typedef int Item
 typedef struct queue_type *queue

 void insert_end(Item i, queue);
 void remove_beginning(queue);
 Item return_first_item(queue);
 Item return_last_item(queue);
 bool test_empty(queue);

 #endif // QUEUE_H
