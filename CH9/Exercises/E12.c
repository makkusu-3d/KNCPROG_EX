/**
 * Write the following function:
 *
 * double inner_product(double a[], double b[], int n);
 *
 * The function should return a[0] * b[0] + a[1] + b[1] +...+ a[n-1] * b[n-1].
 */

 #include <stdio.h>
 #define ARRAY_SIZE 100

 int i = 0, array_size = 0;
 char character;
 double a[ARRAY_SIZE], b[ARRAY_SIZE];

 // Function Prototype
 double inner_product(double a[], double b[], int n);

 int main(void)
 {
     printf("Enter numbers for array a: ");

     for (;;) {
        scanf("%c", &character);
        if (character == '\n') {
            break;
        } else {
            a[i++] = ((int) character - 48);
        }
        array_size++;

     }

     printf("Enter a maximum of %d numbers for array b: ", array_size);
    i = 0;
    for (;;) {
        scanf("%c", &character);
        if (character == '\n') {
            break;
        } else {
            b[i++] = ((int) character - 48);
        }
     }

     printf("The inner product of array a and array b: %.2lf", inner_product(a, b, array_size));

     return 0;
 }

 // Function to find the inner product of two arrays
 double inner_product(double a[], double b[], int n)
 {
     double sum = 0.0f;
     int i;

     for (i = 0; i < n; i++) {
        sum += (a[i] * b[i]);

     }
     return sum;
 }
