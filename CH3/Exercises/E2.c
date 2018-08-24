/* Write calls of printf that display a float variable x in
 * the following format
 */

// Exponential notation; left-justified in a field of size 8;
// one digit after the decimal point.

printf("%-8.1e", x);


// Exponential notation; right justified in afield of size 10;
// six digits after the decimal pointer_safety.

printf("%10.6e", x);


// Fixed decimal notation; left-justified in a field of size 8;
// three digits after the decimal pointer_safety.

printf("%-8.3f", x);


// Fixed decimal notation; right-justified in a field of size 6;
// no digits after the decimal point.

printf("%6f", x);
