for (p = first; p != NULL; p = p->next)
    free(p);

// Converted to a while statement

p = first;

while (p != NULL)
{
    free(p);
    p = p->next;
}

// It will delete the first node by
// using the free() function
// therefore *p (struct) will not exist
// and therefore a next member cannot
// accessed
