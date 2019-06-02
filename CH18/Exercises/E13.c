/**
 *  Which of the following declarations are legal? (Assume that PI
 *  is a macro that represents 3.14159.)
 *
 *  (a) char c = 65; LEGAL
 *  (b) static int i = 5, j = i * i; ILLEGAL
 *  (c) double d = 2 * PI; LEGAL
 *  (d) double angles[] = {0, PI / 2, PI, 3 * PI / 2}; LEGAL
 *
 */

 #include <stdio.h>

 #define PI 3.14159
 const int i = 10;

 int main(void)
 {
    char c = 65;
    static int i = 5, j = i * i; // Requires compile time constant expression
    double d = 2 * PI;
    double angles[] = {0, PI / 2, PI, 3 * PI / 2};

    return 0;
 }
