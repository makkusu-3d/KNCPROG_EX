/**
 * Modify Programming Project 5 from Chapter 5 so that it uses
 * a function to compute the amount of income tax. When passed an
 * amount of taxable income, the function will return the tax due.
 */



#include <stdio.h>

float tax_income;

int main(void)
{
    printf("Enter the amount of taxable income: ");
    scanf("%f", &tax_income);

    printf("Tax due: %.2f", tax_due(tax_income) );

    return 0;
}

float tax_due( float tax_income)
{
    if (tax_income < 750.00f)
        tax_due = 0.01f * tax_income;
    else if (tax_income < 2250.00f)
        tax_due = 7.50f + 0.02f * (tax_income - 750.00f);
    else if (tax_income < 3750.00f)
        tax_due = 37.50f + 0.03f * (tax_income - 2250.00f);
    else if (tax_income < 5250.00f)
        tax_due = 82.50f + 0.04f * (tax_income - 3750.00f);
    else if (tax_income <= 7000.00f)
        tax_due = 142.50f + 0.05f * (tax_income - 5250.00f);
    else
        tax_due = 230.00f + 0.06f * (tax_income - 7000.00f);

    return tax_due;
}
