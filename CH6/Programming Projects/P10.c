/* Programming Project 9 in Chapter 5 asked you to write a program that
 * determines which of two dates comes earlier on the calender. Generalize
 * the program so that the user may enter any number of dates. The
 * user will enter 0/0/0 to indicate that no more dates will be entered
 *
 * Enter a date (mm/dd/yy): 3/6/08
 * Enter a date (mm/dd/yy): 5/17/07
 * Enter a date (mm/dd/yy): 6/3/07
 * Enter a date (mm/dd/yy): 0/0/0
 * 5/17/07 is the earliest date
 *
 */

#include <stdio.h>

int d_A, m_A, y_A, t_A, d_S, m_S, y_S, r_S = 36526; // r_S ==> At Maximum possible value

int main(void)
{
    for(;;)
    {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &m_A, &d_A, &y_A);

        if (m_A == 0 && d_A == 0 && y_A == 0){
            break;
        }

        t_A = d_A + 30 * m_A + 365 * y_A;

        if (t_A < r_S){
            d_S = d_A;
            m_S = m_A;
            y_S = y_A;
            r_S = t_A;
        }
    }
    printf("%d/%d/%d", m_S, d_S, y_S);

    return 0;
}
