/**
 * The following function which computes the area of a
 * triangle, contains two errors. Locate the errors and
 * show how to fix them. (Hint: There are no errors in
 * the formula.)
 */

 // No prototype is present therefore the compiler will
 // not check if function is called with correct number
 // of arguments and will do default argument promotions.
 // This style of function is common with pre C89/C99
 // standard C such as in K&R C.

 // This can be fixed with a function prototype such as:
double triangle_area(double, double);

                            // Parameter height has no type
                            // The prototype will define the
                            // type for height.
double triangle_area(double base, height)
double product; // Old style of declaration
{
    product = base * height; // Although height will
                             // become type double here
                             // from being int type
    return product / 2;
}

