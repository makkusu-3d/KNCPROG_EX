/**
 * Write a function check (x,y,n) that return 1 if both
 * x and y fall between 0 and n-1, inclusive. The function
 * should return 0 otherwise. Assume that x, y, and n are
 * all of type int.
 */

int check(int,int,int); // Prototype

int check(int x, int y, int n)
{
    if (x > 0 && x < n - 1 && y > 0 && y < n - 1) {
        return 1;
    } else {
        return 0;
    }
}
