/* What output do the following calls of printf produce
 * Note: ~ represents white space.
 */

#include <stdio.h>

int main(void)
{
    printf("%6d,%4d\n", 86, 1040);
    // Output:~~~~86,1040

    printf("%12.5e\n", 30.253);
    // Output:3.02530e+001

    printf("%.4f\n", 83.162);
    // Output:83.1620

    printf("%-6.2g", .0000009979);
    // Output:1e-006
    return 0;
}
