/** The following (rather confusing) function finds the
 *  median of three numbers. Rewrite the function so that
 * it has just one return statement.
 */

 #include <stdio.h>

 double median(double x, double y, double z); // Function Prototype
 int x = 9, y = 2, z = 3;

 int main(void)
 {
     printf("The median is: %lf", median(x,y,z));

     return 0;
 }

 // New Function with single return
 double median(double x, double y, double z)
 {
    int i;

    double array[3] = {x,y,z};

    // Outlining possible combinations  of x,y,z
    // in terms of greater then symbols
    // x < y < z        // 0,1,2
    // x < z < y        // 0,2,1
    // y < x < z <--    // 1,0,2
    // y < z < x        // 1,2,0
    // z < x < y <--    // 2,0,1
    // z < y < x        // 2,1,0

    // All possible combinations of x,y,z
    int check_array[6][3] = {{0,1,2},
                             {0,2,1},
                             {1,0,2},
                             {1,2,0},
                             {2,0,1},
                             {2,1,0}};

    // Return when centre array element is the median value
    for (i = 0; i < 6; i++) {
        printf("Printing check arrays: %lf %lf %lf\n",array[check_array[i][0]], array[check_array[i][1]], array[check_array[i][2]]);
        if (array[check_array[i][0]] < array[check_array[i][1]] && array[check_array[i][1]] < array[check_array[i][2]] ) {
            return array[check_array[i][1]];
        }
    }
 }


 /**
 // Original Median Function
 double median(double x, double y, double z)
 {
     if (x <= y)
        if (y <= z) return y;
        else if (x <= z) return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
 }
 */
