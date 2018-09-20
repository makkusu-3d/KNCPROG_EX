/** The square2.c program of Section 6.3 will fail
 *  usually by printing strange answers) if i * i
 *  exceeds the maximum value. Run the program and
 *  determine the smallest value of n that causes
 *  failure. Try changing the type of i to short and
 *  running the program again. (Don't forget to update
 *  the conversion specification in the call of printf!)
 *  Then try long. From these experiments,
 *  what can you conclude about the number of bits used
 *  to store integer types on your machine?
 */

/* Prints a table of squares using a for statement */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%20Ld%20Ld\n", i, i * i);
        
    // Verifying that my bit size conclusion is correct
    // sizeof gets the byte size and since there are 8 bits
    // per byte, the return value of sizeof function is multiplied
    // by 8. This gives the bit size for the required int types.
    printf("Short bit size: %d\n", 8 * sizeof(short));
    printf("Int bit size: %d\n", 8 * sizeof(int));
    printf("Long bit size: %d\n", 8 * sizeof(long));

    return 0;
}

/**
 *  Any value of n that is less then 1 the loop
 *  wont even run once.
 *
 *  Maximum value for int is 2,147,483,648 for 32bit or 64bit
 *  By taking the sqrt(2,147,483,648)
 *  which equals 46340.95 (2.d.p) we know
 *  that the maximum value for i without overflow
 *  is 46340
 *
 *  The largest value for a short is 32767
 *  By taking the sqrt(32767)
 *  which equals 181.02 (2.d.p)
 *  that the maximum value for i without overflow
 *  is 181. The conversion specification
 *  in printf is %hd due to the short.
 *
 *  The largest value for a long type is different
 *  for the 32bit and 64bit.
 *  32bit --> 2,147,483,647
 *  64bit --> 9,223,372,036,854,775,807
 *  sqrt(2,147,483,647) = 46340.95 (2.d.p)
 *  After a i of 46340 strange value were printed
 *
 *  therefore the maximum bit sizes are
 *  short --> 16 bit
 *  int   --> 32 bit
 *  long  --> 32 bit
 *
 *  It is obvious that long would 32bit since the
 *  IDE i am using is 32bits. 
 */
