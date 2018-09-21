/* Modify Programming Project 6 from chapter 3 so
 * that the user may add, subtract, multiply,
 * or divide two fractions (by entering either
 * +,-,*,or / between the fractions).
 *
 */

#include <stdio.h>

int num1, denom1, num2, denom2, result_num, result_denom;
char oper;


int main(void)
{
    printf("Enter two fractions separated by a operator: ");
    scanf("%d /%d %c %d /%d", &num1, &denom1, &oper, &num2, &denom2);

    switch (oper){
        case '+':
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        break;

        case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        if (result_num == 0){
            result_denom = 0;
        }
        break;

        case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        break;

        case '/':
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        break;
    }

    printf("The expression evaluates to: %d/%d\n", result_num, result_denom);

    return 0;
}
