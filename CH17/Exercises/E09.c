/**
 * True or false: If x is a structure and a is a member
 * of that structure, then (&x)->a is the same as
 * x.a. Justify your answer.
 */

/**
 * (&x)->a expands to *(&x).a
 *
 * True since * and & cancel out which leaves
 * x.a
 *
**/
