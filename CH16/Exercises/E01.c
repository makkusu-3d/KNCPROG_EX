/**
 * In the following declarations, the x and y structures have
 * members names x and y:
 *
 * struct { int x, y; } x;
 * struct { int x, y; } y;
 *
 * Are declarations legal on an individual basis? Could both
 * declarations appear as shown in a program? Justify your answer.
 */

 /** Testing structures **/
 #include <stdio.h>

 int main(void)
 {
     struct { int x, y; } x;
     struct { int x, y; } y;

     x.x = 1;
     x.y = 1;

     y.x = 1;
     y.y = 1;

     printf("%d", x.x);
     printf("%d", x.y);
     printf("%d", y.x);
     printf("%d", y.y);
 }

/**
 * Yes these declarations are legal on an individual basis
 *
 * Both of these can appear as shown in a program. The members
 * are limited to the scope of the structure and only
 * accessible using a designator operator.
 */
