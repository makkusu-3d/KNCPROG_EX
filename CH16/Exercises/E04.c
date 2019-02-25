/** (a) **/
typedef struct {
    double real;
    double imaginary;
} complex;

/** (b) **/
 complex c1, c2, c3;

/** (c) **/
complex make_complex(double real, double imaginary)
{
    complex c;

    c.real = real;
    c.imaginary = imaginary;

    return c;
};

/** (d) **/
complex add_complex(struct complex_a, struct complex_b)
{
    complex c;

    c.real      = complex_a.real      + complex_b.real;
    c.imaginary = complex_a.imaginary + complex_b.imaginary;

    return c
};
