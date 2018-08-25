/* Write a program that formats product information entered
 * by the user. A session with the program should look like
 * this
 */

#include <stdio.h>

int item_num, mm, dd, yyyy;
float unit_price;

int main(void)
{
    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%d/%d/%d",
           item_num,unit_price,mm,dd,yyyy);

    return 0;
}
