/**
 * Let f be the following function. What will be the value of
 * f(10) if f has never been called before?
 *
 * ANS: 0
 *
 * What will be the value
 * of f(10) if f has been called five times previously?
 *
 * ANS: 50
 */

int f(int i)
{
    static int j = 0;
    return i * j++;
}
