/**
 * Suppose that the function f has the following definition:
 * int f(int a, int b) {....}
 * Which of the following statements are legal?
 * (Assume that i has type int and x has type double)
 * (a) i = f(83, 12);
 * (b) x = f(83, 12);
 * (c) i = f(3.15, 9.28);
 * (d) x = f(3.15, 9.28);
 * (e) f(83, 12);
 *
 * (a) -> (d) are legal if the return of the function call
 * is not empty or void due to the assignment to i (int)
 * and x (double). 
 *
 * (e) This is legal
 */
