/* The following if statement is unnecessarily complicated.
 * simplify it as much as possible. (Hint: The entire statement
 * can be replaced by a single assignment)
 *
 * if (age >= 13)
 *  if (age <= 19)
 *      teenager = true;
 *  else
 *      teenager = false;
 * else if (age < 13)
 *  teenager = false;
 */

#include <stdio.h>
#include <stdbool.h>

int age;
bool teenager;

int main(void)
{
    printf("Input the age: ");
    scanf(" %d", &age);

    teenager = (age >= 13 && age <= 19) ? true : false;

    if(teenager)
        printf("It is a teenager (true)");
    else
        printf("It is not a teenager (false)");

    return 0;
}
