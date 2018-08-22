/* Program that computes the volume of a sphere
 * to 2 decimal places where the user inputs
 * the radius
 */

#include <stdio.h>
#define PI 3.14


float volume_Sphere, rad;


int main(void)
{
    printf("Input the desired radius: ");

    scanf("%f", &rad);

    volume_Sphere = (4.0f/3.0f)*PI*rad*rad*rad;

    printf("Volume of sphere (2.d.p): %.2f", volume_Sphere);

    return 0;
}
