/**
 * Suppose that p has been declared as follows:
 *
 * Char *p = "abc";
 *
 * Which of the following function calls are legal?
 * Show the output produced by each legal call, and
 * explain why the others are illegal.
 *
 * (a) putchar(p);
 *     This is illegal, it expects a int type argument
 *     put is being passed a argument of type char *.
 *
 *     output: $
 *
 * (b) putchar(*p);
 *     This is legal, the function is being passed a
 *     single character which is the first character
 *     p is pointing to.
 *
 * (c) puts(p);
 *     This is legal. p is a pointing to a string
 *     and puts requires and argument of char *
 *
 * (d) puts(*p);
 *     This is illegal. This is because *p is a
 *     characters of the string in this case 'a'
 *     puts expects an argument of type char *
 *     therefore an error will occur.
 */
