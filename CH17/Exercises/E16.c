/**
 * Write the following function. The call sum(g,i,j)
 * should return g(i) + ... + g(j).
 * int sum(int (*f)(int), int start, int end);
 */

int sum(int (*f)(int), int start, int end)
{
    int i, sum = 0;
    for(i = start; i <= end; i++) {
        sum += f(i);
    }
    return sum;
}
