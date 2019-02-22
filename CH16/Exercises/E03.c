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

/**
 * (d) Write a function named add_complex that adds the corresponding
 * members of its arguments(both complex structures), then returns
 * the returns the result (another complex structure).
 */

struct complex add_complex(struct complex_a, struct complex_b)
{
    struct complex c;

    c.real      = complex_a.real      + complex_b.real;
    c.imaginary = complex_a.imaginary + complex_b.imaginary;

    return c
};
