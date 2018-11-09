/**
 * Modify Programming Project 3 from Chapter 6 so that it
 * includes the following function:
 *
 * void reduce(int numerator, int denominator,
 *             int *reduced_numerator,
 *             int *reduced_denominator);
 *
 * numerator and denominator are the numerator and denominator
 * of a fraction. reduced_numerator and reduced_denominator
 * are pointers to variables in which the function will store
 * the numerator and denominator of the fraction once it
 * has been reduced to lowest terms.
 */

 // Preprocessing Directives
 #include <stdio.h>

 // External Variables
 int ex_num, ex_denom, red_num, red_denom;

 // Function Prototypes
 void reduce(int, int, int*, int*);
 void user_input(int*, int*);
 void program_output(void);

 // Function definitions
 int main(void)
 {
    user_input(&ex_num, &ex_denom);
    reduce(ex_num, ex_denom, &red_num, &red_denom);
    program_output();

    return 0;
 }

 void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
 {
    int num, den, m, n, r;

    num = m = numerator;
    den = n = denominator;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    *reduced_numerator = (num / m);
    *reduced_denominator = (den / m);
 }


 void user_input(int *ex_num, int *ex_denom)
{
    int num_1, den_1;
    printf("Enter a fraction: ");
    scanf("%d/ %d", &num_1, &den_1);

    *ex_num = num_1;
    *ex_denom = den_1;
}


void program_output(void)
{
    printf("The answer is: %d/%d", red_num, red_denom);
}

