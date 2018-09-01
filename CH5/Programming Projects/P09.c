/* Write a program that prompts the user to enter two dates and then
 * indicates which date comes earlier on the calender:
 *
 * Enter first date (mm/dd/yy): 3/6/08
 * Enter second date (mm/dd/yy): 5/17/07
 * 5/17/07 is earlier than 3/6/08
 *
 */

// Assuming dates are from year 2000
// Assuming a days per month = 30

#include <stdio.h>
#include <stdbool.h>

int d_A, m_A, y_A, d_B, m_B, y_B,t_A, t_B;
bool A_B = 0;
bool A_equal_B;

int main(void)
{

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m_A, &d_A, &y_A);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m_B, &d_B, &y_B);

    t_A = d_A + 30 * m_A + 365 * y_A;

    t_B = d_B + 30 * m_B + 365 * y_B;

    if (t_A < t_B)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m_A, d_A, y_A, m_B, d_B, y_B);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d\n", m_B, d_B, y_B, m_A, d_A, y_A);


    // Another way of doing it using a boolean
    // A_B = 0; --> A earlier than B
    // A_B = 1; --> B earlier than A

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m_A, &d_A, &y_A);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m_B, &d_B, &y_B);

    if (y_A > y_B)
        A_B = 1;
    else if(y_A < y_B)
        A_B = 0;
    else
        if (m_A > m_B)
            A_B = 1;
        else if (m_A < m_B)
            A_B = 0;
        else
            if (d_A > d_B)
                A_B = 1;
            else if (d_A < d_B)
                A_B = 0;
            else
                // If both are equal
                A_equal_B = 1;

    if(A_equal_B)
        printf("Both are equal"); // Will execute this print function if equal
    else if (A_B)
        printf("%d/%d/%d is earlier than %d/%d/%d", m_B, d_B, y_B, m_A, d_A, y_A);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d", m_A, d_A, y_A, m_B, d_B, y_B);

    return 0;
}

