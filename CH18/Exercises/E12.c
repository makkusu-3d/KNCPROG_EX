/**
 * (a) Write a complete description of the type of the function
 *     f, assuming that it's declared as follows:
 *
 *     int (*f(float (*)(long), char *))(double);
 *
 *      ANS: f is a function which takes the (arguments of function
 *           pointer which takes the argument of long and returns
 *           float and second argument which takes a char pointer)
 *           this f function returns a pointer to a function which
 *           takes the argument of double which returns int.
 *
 * (b) Give an example showing how f would be called.
 *
 *      ANS: x = (*f(f_arg(var_long),&char_var)(d_arg);
 */
