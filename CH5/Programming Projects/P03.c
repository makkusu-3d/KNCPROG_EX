/* Modify the broker.c program of Section 5.2 by making both
 * of the following changes:
 *
 * (a) Ask the user to enter the number of shares and the price
 *     per share, instead of the value of the trade
 *
 * (b) Add statements that compute the commission charged by a
 *     rival broker ($33 plus 3 cent per share for fewer than
 *     2000 shares; $33 plus 2 cent per share for 2000 shares
 *     or more). Display the rival's commission as well as the
 *     commission charged by the original broker.
 */

/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commission, commission_rival, value, shares, share_price;

    printf("Enter the number of shares: ");
    scanf("%f", &shares);
    printf("Enter the price per share:  ");
    scanf("%f", &share_price);

    value = shares * share_price;

    // Rival broker commission
    if (shares < 2000)
        commission_rival = 33.00f + 0.03f * shares;
    else
        commission_rival = 33.00f + 0.02f * shares;

    // Original broker commission
    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission Rival Broker:    $%.2f\n", commission_rival);
    printf("Commission Original Broker: $%.2f\n", commission);

    return 0;
}
