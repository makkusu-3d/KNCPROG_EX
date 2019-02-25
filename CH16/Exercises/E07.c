/**
 * Assume that the fraction structure contains two members:
 * numerator and denominator (both of type int). Write functions
 * that perform the following operations on fractions:
 *
 * (a) Reduce the fraction f to lowest terms. Hint: To reduce a
 * fraction to lowest terms, first compute the greatest common
 * divisor (GCD) of the numerator and denominator. Then divide
 * both the numerator and denominator by the GCD.
 *
 * (b) Add the fractions f1 and f2.
 *
 * (c) Subtract the fraction f2 from the fraction f1.
 *
 * (d) Multiply the fractions f1 and f2.
 *
 * (e) Divide the fraction f1 by the fraction f2.
 *
 * The fractions f, f1 and f2 will be arguments of type struct
 * fraction; each function will return a value of type struct
 * fraction. The fractions returned by the functions in parts
 * (b)-(e) should be reduced to lowest terms. Hint: You may use
 * the function from part (a) to help write the functions in part
 * (b)-(e).
 */

// Preprocessing Directives
#include <stdio.h>
#include <stdbool.h>

// External Variables
struct fraction {
    int num;
    int den;
} f1 = {7,48},
  f2 = {8,48};

// Function Prototypes
struct fraction lowest_terms(struct fraction);
struct fraction add_fractions(struct fraction, struct fraction);
struct fraction subtract_fractions(struct fraction, struct fraction);
struct fraction multiply_fractions(struct fraction, struct fraction);
struct fraction divide_fractions(struct fraction, struct fraction);

// Function Definition
int main(void)
{
    struct fraction f_test_a, f_test_b, f_test_c, f_test_d, f_test_e;

    f_test_a = lowest_terms(f1);

    printf("Function (a): \nNum: %d\nDen: %d\n", f_test_a.num, f_test_a.den);

    f_test_b = add_fractions(f1,f2);

    printf("Function (b): \nNum: %d\nDen: %d\n", f_test_b.num, f_test_b.den);

    f_test_c = subtract_fractions(f1,f2);

    printf("Function (c): \nNum: %d\nDen: %d\n", f_test_c.num, f_test_c.den);

    f_test_d = multiply_fractions(f1,f2);

    printf("Function (d): \nNum: %d\nDen: %d\n", f_test_d.num, f_test_d.den);

    f_test_e = divide_fractions(f1,f2);

    printf("Function (e): \nNum: %d\nDen: %d\n", f_test_e.num, f_test_e.den);

    return 0;
}

/** function for (a) **/
struct fraction lowest_terms(struct fraction f)
{
    int a, b, c, gcd;

    struct fraction r;

    a = f.num;
    b = f.den;

    /** Euclids Algorithm **/

    for (;;) {
        c = a % b;
        if (c == 0) {
            break;
        };

        a = b;
        b = c;
    };

    gcd  = b;

    r.num = f.num / gcd;
    r.den = f.den / gcd;

    return r;
};

/** function for (b) - add fractions f1 and f2 **/
struct fraction add_fractions(struct fraction f1, struct fraction f2)
{
    struct fraction r;

    r.num  = ((f1.num * f2.den) + (f2.num * f1.den));

    r.den = f1.den * f2.den;

    r = lowest_terms(r);

    return r;
};

/** function for (c) - subtract the fraction f2 from f1 **/
struct fraction subtract_fractions(struct fraction f1, struct fraction f2)
{
    struct fraction r;
    bool sign = false;

    r.num  = ((f1.num * f2.den) - (f2.num * f1.den));

    if (r.num < 0) {
        r.num = -r.num;
        sign = true;
    }

    r.den = f1.den * f2.den;

    r = lowest_terms(r);
    if (sign == true) {
        r.num = -r.num;
    }

    return r;
};

/** function for (d) - multiply fraction f1 and f2 **/
struct fraction multiply_fractions(struct fraction f1, struct fraction f2)
{
    struct fraction r;

    r.num = f1.num * f2.num;
    r.den = f1.den * f2.den;

    return lowest_terms(r);
};

/** function for (e) - divide the fraction f1 by the fraction f2 **/
struct fraction divide_fractions(struct fraction f1, struct fraction f2)
{
    struct fraction r;

    r.num = f1.num * f2.den;
    r.den = f1.den * f2.num;

    return lowest_terms(r);
};
