/**
 * Consider the following "mystery" function:
 *
 * void pb(int n)
 * {
 *    if (n != 0) {
 *       pb(n / 2);
 *       putchar('0' + n % 2);
 *    }
 * }
 *
 * Trace the execution of the function by hand. Then write
 * a program that calls the function, passing it a number
 * entered by the user. What does the function do?
 */

 // This function prints the binary value of the input number.

 #include <stdio.h>

 int num;
 void pb(int);

 int main(void)
 {
    printf("Enter a number to pass to the function: ");
    scanf("%d", &num);

    pb(num);

    return 0;
 }

void pb(int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

 /**
 void pb(10)
 {
     if (10 ! = 0) {
        pb(10/2=5)
        {
            if (5 != 0) {
                pb(5/2=2)
                {
                    if (2 != 0) {
                        pb(2/2)
                        {
                            if (1 != 0) {
                                pb(1/2)
                                {
                                    if (0 != 0) {
                                        pb(0/2)
                                    }
                                }
                                putchar('0' + 1 % 2); // 48 + 0 = 48 --> '1'
                            }
                        }
                        putchar('0' + 2 % 2); // 48 + 0 = 48 --> '0'
                    }
                }
                putchar('0' + 5 % 2); // 48 + 1 --> '1'
            }
        }
        putchar('0' + 10 % 2); // 47 + 0 --> '0'
     }
 }

 2^0 2^1 2^2 2^3 2^4 2^5 2^6
 1   2   4   8   16  32  64
 0   1   0   1
     2       8 --> 2 + 8 = 10 --> This code prints the binary value for a number
 **/

 // Output is 1010
