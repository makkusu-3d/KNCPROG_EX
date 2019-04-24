/**
 * Modify the compare_parts function so that parts are
 * sorted with their numbers in descending order.
 */

int compare_parts(const void *p, const void *q)
{
    const struct part *p1 = p;
    const struct part *q1 = q;
    // < changed to >
    if (p1->number > q1->number)
        return -1;
    else if (p1->number == q1->number)
        return 0;
    else
        return 1;
}

int compare_parts(const void *p, const void *q)
{
    // Inverted sign
    return (0 -(strcmp(((struct part *) p)->name,
                  ((struct part *) q)->name)));
}
