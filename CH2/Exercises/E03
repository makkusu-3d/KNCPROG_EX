/* 
 * Computes the dimensional weight of a 12" x 10" x 8" box
 * Condense the dweight.c program by (1) replacing the assignments
 * to height, length and width with initializers and (2) removing
 * the weight variable, instead calculating +165) / 166 within
 * the last printf.
 */

#include <stdio.h>

int main(void)
{
    int height = 42, length = 42, width = 42, volume; // (1)
    
    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166); // (2)

    return 0;
}

