/**
 * Write declarations for the following variables and functions:
 *
 * (a) p is pointer to a function with a character pointer argument
 *     that returns a character pointer.
 *
 *     ANS: char* (*p)(char*);
 *
 * (b) f is a function with two arguments: p, a pointer to a structure
 *     with tag t, and n, a long integer. f returns a pointer to a
 *     function that has no arguments and returns nothing.
 *
 *      ANS: void (f(struct t *p, long int n))(void);
 *
 * (c) a is an array of four pointers to a function that has no
 *     arguments and returns nothing. The elements of a initially
 *     point to functions named insert, search, update and print.
 *
 *     ANS: void (*a[4])(void) = {insert,search,update,print};
 *
 * (d) b is an array of 10 pointers to functions with two int
 *     arguments that return structures with tag t.
 *
 *     ANS: struct t (*b[10])(int, int);
 */


