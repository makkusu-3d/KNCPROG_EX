/**
 * Write the following function:
 *
 * float compute_GPA(char grades[], int n);
 *
 * The grades array will contain letter grades
 * (A,B,C,D or F, either upper-case or lower-case);
 * n is the length of the array. The function should
 * return the average of the grades (assume that A = 4,
 * B = 3, C = 2, D = 1, and F = 0).
 */

 #include <stdio.h>
 #include <ctype.h>

 char character;
 char char_array[];
 int i = 0, array_size = 0;

 // Function Prototype
 float compute_GPA(char grades[], int n);

 int main(void)
 {
     printf("Enter list of grades with no spaces: ");
     for(;;) {
        scanf("%c", &character);
        if (character == '\n') {
            break;
        } else {
            char_array[i++] = character;
        }
        array_size++;
     }

     // Testing if array elements and size is correct
     /*
     printf("Array Size: %d", array_size);

     for (i = 0; i < array_size; i++) {
        printf("%c", char_array[i]);
     }
     */
     printf("The computed GPA: %f", compute_GPA(char_array, array_size));

 }

// ASCII A->65, B->66, C->67, D->68, F->69
// Function that computes GPA
float compute_GPA(char grades[], int n)
 {
     int sum = 0;

     for(i = 0; i < n; i++) {
        sum += ( 69 - (int) (toupper(grades[i])));
     }

     return ( (float) sum / (float) n );
 }
