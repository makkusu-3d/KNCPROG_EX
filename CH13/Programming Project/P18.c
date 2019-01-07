/**
 * Write a program that accepts a date from the user
 * in the form mm/dd/yyyy and then displays it in the
 * form month dd, yyyy, where month is the name of
 * the month:
 *
 * Enter a date (mm/dd/yyyy): 2/17/2011
 * You entered the date February 17, 2011
 *
 * Store the month names in an array that contains
 * pointers to strings.
 */

 // Preprocessing Directives
 #include <stdio.h>

 // External Variables
 char date_str[20] = "";

 // Function Prototypes
 void convert_date(char date_str[]);

 // Function Definitions
 int main(void)
 {
    convert_date(date_str);

    return 0;
 }

 void convert_date(char date_str[])
 {
     int month, day, year;

     char *month_str[] = {"January",   "February", "March",    "April",
                          "May",       "June",     "July",     "August",
                          "September", "October",  "November", "December"};

     printf("Enter a date (mm/dd/yyyy): ");

     scanf("%2d/%2d/%4d", &month, &day, &year);

     sprintf(date_str, "%s %2d, %4d", month_str[month - 1], day, year);

     printf("You entered the date %s", date_str);
 }
