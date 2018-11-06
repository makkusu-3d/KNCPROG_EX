/**
 * If i is an int variable and p and q are pointers to int,
 * which of the following assignments are legal?
 *
 * (a) p = i;   -> Not legal, i which is a variable is
 *                 being assigned to address pointed to
 *                 by pointer *p
 * (b) *p = &i  -> Not legal, assigning the address of i
 *                 as the value of the pointed value
 * (c) &p = q   -> Not legal, assigning the pointed
 *                 address of q to the address of the pointer
 *                 p
 * (d) p = &q   -> Not legal, making p point to the address
 *                 of pointer q
 * (e) p = *&q  -> Legal, making p point to the address
 *                 that q point to
 * (f) p = q    -> Legal, Same as (e)
 * (g) p = *q   -> Not legal, making the pointed address
 *                 of pointer p be the value of the
 *                 variable q point to.
 * (h) *p = q   -> Not legal, making the value of the variable
 *                 p points to equal to the address of q
 * (i) *p = *q  -> Legal, makes whatever pointer p is pointing
 *                 at equal to what pointer q is pointing
 *                 at.
 */

