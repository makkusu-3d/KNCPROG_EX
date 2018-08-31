/* In one state, single residents are subject to the following income
 * tax:
 *
 * Income           Amount of tax
 * Not over $750    1% of income
 * $750-$2250       $7.50   plus 2% of amount over $750
 * $2250-$3750      $37.50  plus 3% of amount over $2250
 * $3750-$5250      $82.50  plus 4% of amount over $3750
 * $5250-$7000      $142.50 plus 5% of amount over $5250
 * Over $7000       $230.00 plus 6% of amount over $7000
 *
 * Write a program that asks the user to enter the amount of
 * taxable income, then displays the tax due.
 *
 */

#include <stdio.h>

float tax_income, tax_due;

int main(void)
{
    printf("Enter the amount of taxable income: ");
    scanf("%f", &tax_income);

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

    printf("Tax due: %.2f", tax_due);

    return 0;
}
