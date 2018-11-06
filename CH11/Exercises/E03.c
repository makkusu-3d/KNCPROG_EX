/**
 * The following function supposedly computes the sum
 * and average of the numbers in the array a, which has
 * length n, avg and sum point to variables that the
 * function should modify. Unfortunately, the function
 * contains several errors; find and correct them.
 */

avg_sum(a, n, &avg, &sum);

// Function with Errors
void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    sum = 0.0; // Error since sum equates to the address
               // which it is pointed to and it is being assigned
               // 0.0 which is invalid.

    for (i = 0; i < n; i++)
        sum += a[i]; // Same as the error talked about above
                     // except being assigned an array element

    avg = sum / n; // avg and sum equates to the address
                   // which is pointed to. This is invalid
}

// Function with Errors fixed

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;

    for (i = 0; i < n; i++)
        *sum += a[i];

    *avg = *sum / n;
}
