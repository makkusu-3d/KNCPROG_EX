/* What output does the following program fragment product? */

#include <stdio.h>

int sum, i;

int main(void)
{
    // Predicted income: i = 0+2+4+6+8 = 20
    // This is obvious since any number that
    // gets remainder of 1 with a division of 2
    // will not be added to the sum up to and including
    // 8 since 10 causes the test expression to be false
    // ending the loop. 

    sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum);
    
    return 0;
}

// Going through the steps that occur for reinforcement
//
// sum = 0
// i = 0
// 0 % 2 = 0 false -> dont continue
// sum = 0 + 0 = 0
// i = 0 + 1 = 1
// 1 < 10 -> true
// 1 % 2 = 1 true -> continue
// skip sum += i
// i = 1 + 1 = 2
// 2 < 10 -> true
// 2 % 2 = 0 false -> dont continue
// sum = 0 + 2 = 2
// i = 2 + 1 = 3
// 3 < 10 -> true
// 3 % 2 = 1 true -> continue
// skip sum += i
// i = 3 + 1 = 4
// 4 < 10
// 4 % 2 = 0 false -> dont continue
// sum = 2 + 4 = 6
// i = 4 + 1 = 5
// 5 < 10 -> true
// 5 % 2 = 1 true -> continue
// skip sum += i
// i = 5 + 1 = 6
// 6 < 10 true
// 6 % 2 = 0 false -> dont continue
// sum = 6 + 6 = 12
// i = 6 + 1 = 7
// 7 < 10 true
// 7 % 2 = 1 true -> continue
// i = 7 + 1 = 8
// 8 < 10 true
// 8 % 2 = 0 false -> dont continue
// sum = 12 + 8 = 20
// i = 8 + 1 = 9
// 9 < 10 true
// 9 % 2 = 1 true -> continue
// i = 9 + 1 = 10
// 10 < 10 false -> for loop ends
// print sum -> 20
