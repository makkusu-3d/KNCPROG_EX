/**
 * Write the following function:
 *
 * int *create_array(int n, int initial_value);
 *
 * The function should return a pointer a dynamically
 * allocated int array with n members, each of which
 * is initialized to initial_value. The return value
 * should be NULL if the array can't be allocated
 */

 // Preprocessing Directives
 #include <stdio.h>
 #include <stdlib.h>

 // External Variables
 int *p, i;

 // Function Prototypes
 int *create_array(int, int);


 // Function Definitions

 // Function Test
 int main(void)
 {
    p = create_array(10, 7);

    for (i = 0; i < 10; i++) {
        printf("%d", p[i]);
    }
    return 0;
 }

int *create_array(int n, int initial_value)
{
    int *ptr, i;

    ptr = malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        *(ptr+i) = initial_value;
    }
    return ptr;
}
