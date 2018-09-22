/* Write program that evaluates an expression:
 *
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 *
 * The operands in the expression are floating
 * point numbers; the operators are +,-,*, and /.
 * The expression is evaluated from left to right
 * (no operator takes precedence over any other
 *  operator)
 *
 */

#include <stdio.h>

char character, oper;
float num, save_num = 0;

int main(void)
{
    printf("Enter an expression: ");

    scanf(" %f", &num);
    save_num += num;

    for(;;){

        scanf("%c", &oper);

        if(oper == '\n')
            break;

        scanf("%f", &num);

        switch(oper){
            case '+':
                save_num += num;
                break;
            case '-':
                save_num -= num;
                break;
            case '*':
                save_num *= num;
                break;
            case '/':
                save_num /= num;
                break;
        }
    }

    printf("Value of expression: %.1f", save_num);

    return 0;
}
