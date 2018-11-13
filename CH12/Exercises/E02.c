/**
 * Suppose that high, low and middle are all pointer variables
 * of the same type, and that low and high point to elements
 * of an array. Why is the following statement illegal, and
 * how could it be fixed?
 *
 * middle = (low + high) / 2;
 *
 * This is an illegal statement because pointers cannot be added.
 * It can be fixed by middle = low + (high - low) / 2
 * high - low is allowed since pointer subtraction is allowed.
 * [(high - low) / 2] is an integer and we can add an integer
 * to a pointer.
 */
