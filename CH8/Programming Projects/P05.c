/* Modify the interest.c program of Section 8.1 so
 * that it compounds interest monthly instead of
 * annually. The form of the output shouldn't
 * change; the balance should still be shown at
 * annual intervals
 *
 */

#include <stdio.h>
#include <math.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
#define N 10

int main(void)
{
    int i, j, low_rate, num_years, year;
    double value[N];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++) {

            for (j = 0; j < 12; j++) {

                // Since there are 12 months the 12th root of the low_rate + i increase
                // is multiplied by the value of i 12 times which gives
                // the monthly compound interest equal to that given
                // for the annual compound interest.
                // This is done by using nth root = exp(log(x) / n)

                value[i] *= exp(log((((double)low_rate + (double) i) / 100.0) + 1.0 ) / 12.0);
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
