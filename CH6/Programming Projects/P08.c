/* Write a program that prints a one-month calender. The user specifies the
 * number of days in the month and the day of the week on which the month begins:
 *
 * Enter number of days in month: 31
 * Enter starting day of the week (1=Sun, 7=Sat): 3
 *
 *          1  2  3  4  5
 *    6  7  8  9 10 11 12
 *   13 14 15 16 17 18 19
 *   20 21 22 23 24 25 26
 *   27 28 29 30 31
 *
 */

 #include <stdio.h>

 int days, st_days, i, k;

 int main(void)
 {
     printf("Enter number of days in month: ");
     scanf("%d", &days);

     printf("Enter starting day of the week: ");
     scanf("%d", &st_days);

     for(k = 0; k < st_days - 1; k++){
            printf("    ");

     }

     for (i = 1; i <= days; i++){

        printf("%3d ", i);

        k++;

        if(k % 7 == 0){
            printf("\n");
        }
     }
     return 0;
 }
