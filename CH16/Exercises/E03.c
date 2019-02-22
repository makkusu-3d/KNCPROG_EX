/**
 * (a) Show how to declare a tag named complex for a structure
 * with two members, real and imaginary, of type double.
 */

struct complex {
    double real;
    double imaginary;
};

/**
 * (b) Use the complex tag to declare variables named c1,c2, and c3.
 */

 struct complex c1, c2, c3;

 /**
  * (c) Write a function named make_complex that stores its two
  * arguments (both of type double) in a complex structure, then
  * returns the structure.
  */

struct complex make_complex(double real, double imaginary)
{
    struct complex c;

    c.real = real;
    c.imaginary = imaginary;

    return c;
};
