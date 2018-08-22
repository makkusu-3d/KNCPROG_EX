/* Program that computes the volume of a sphere with a
 * 10-meter radius to 2 decimal places.
 */

#include <stdio.h>

int rad = 10;
float pi = 3.14f, volume_Sphere;

int main(void)
{
    volume_Sphere = (4.0f/3.0f)*pi*rad*rad*rad;

    printf("Volume of sphere (2.d.p): %.2f", volume_Sphere);

    return 0;
}
