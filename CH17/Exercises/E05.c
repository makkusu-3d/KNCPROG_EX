/**
 * Suppose that f and p are declared as follows:
 *
 * struct {
 *  union {
 *    char a, b;
 *    int c;
 *  } d;
 *  int e[5];
 * } f, *p = &f;
 *
 * Which of the following statements are legal?
 *
 * (a) p->b = ' ';      Illegal - There is no member b
 *                      in the f or *p struct.
 *
 * (b) p->e[3] = 10;    Legal
 *
 * (c) (*p).d.a = '*';  Legal
 * (d) p->d->c = 20;    Illegal - d is not a pointer to the
 *                      union
 */

// Testing if answers are correct

// Preprocessing Directives
#include <stdio.h>

// External Variables
struct {
    union {
        char a, b;
        int c;
    } d;
    int e[5];
} f, *p = &f;

// Function Prototypes

// Function Definitions
int main(void)
{
    // p->b = ' ';
    // p->e[3] = 10;
    // (*p).d.a = '*';
    // p->d->c = 20;

    return 0;
}
