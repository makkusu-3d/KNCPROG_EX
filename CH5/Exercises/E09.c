/* Are the following if statements equivalent? If not, why not?
 *
 * if (score >= 90)         if(score < 60)
 *  printf("A");              printf("F");
 * else if (score >= 80)    else if (score < 70)
 *  printf("B");              printf("D");
 * else if (score >= 70)    else if (score < 80)
 *  printf("C")               printf("C");
 * else if (score >= 60)    else if (score < 90)
 *  printf("D");              printf("B");
 * else                     else
 *  printf("F");             printf("A");
 *
 */

// Both these if statement are equivalent the use of
// < instead of >= just requires the order of 60 to 90 to
// be reversed.

#include <stdio.h>

int score;

int main(void)
{
    printf("(For 1st statement --> Enter a score from 0-100: ");
    scanf("%d", &score);

    if (score >= 90)
        printf("A\n");
    else if (score >= 80)
        printf("B\n");
    else if (score >= 70)
        printf("C\n");
    else if (score >= 60)
        printf("D\n");
    else
        printf("F\n");

    printf("For 2nd statement --> Enter a score from 0-100: ");
    scanf("%d", &score);

    if (score < 60)
        printf("F\n");
    else if (score < 70)
        printf("D\n");
    else if (score < 80)
        printf("C\n");
    else if (score < 90)
        printf("B\n");
    else
        printf("A\n");

    return 0;
}
