/* What output does the following for statement produce? */

#include <stdio.h>

// Assuming i is an integer
int i;

int main(void)
{

    // The predicted output: 10 5 3 2 1 1 1 1 ..... 1 (1's printed on forever)

    // Testing my conclusion
    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);

    // Break down the steps in the for loop it is easier to see
    // in the form of a while loop

    i = 10;
    while (i >= 1) {            // 10 >= 1 Expression evaluates to true
        printf("%d ", i++);     // 10 is printed and then incremented to 11
        i /= 2;                 // 11 is divided by 2 which 5.5 truncated to 5
    }                           // 5 >= 1 Expression evaluates to true
                                // 5 is printed and then incremented to 6
                                // 6 is divided by 2 which is 3
                                // 3 >= 1 Expression evaluates to true
}                               // 3 is printed and then incremented to 4
                                // 4 is divided by 2 which is 2
                                // 2 >= 1 Expression evaluates to true
                                // 2 is printed and then incremented to 3
                                // 3 is divided by 2 which is 1.5 truncated to 1
                                // 1 >= 1 Expression evaluates to true
                                // 1 is printed and then incremented to 2
                                // 2 is divided by 2 which is 1
                                // 1 >= 1 Expression evaluates to true
                                // 1 is printed and then incremented to 2 ..
                                // ........
