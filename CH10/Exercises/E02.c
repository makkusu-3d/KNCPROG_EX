/**
 * The following program outline shows only function definitions
 * and variable declarations.
 *
 * int b, c;
 * void f(void)
 * {
 *    int b, d;
 * }
 * void g(int a)
 * {
 *    int c;
 *    {
 *       int a, d;
 *    }
 * }
 * int main(void)
 * {
 *    int c, d;
 * }
 *
 * For each of the following scopes, list all variable and parameter
 * names visible in that scope. If there's more than one variable
 * or parameter with the same name, indicate which one is visible.
 *
 * (a) The f function
 * (b) The g function
 * (c) The block in which a and d are declared
 * (d) The main function
 *
 * (a) The declaration of b and d in the f function block
 *     are visible. C from the first declaration is visible
 *     but b has been re-declared in the function.
 *
 * (b) The parameter a is visible along in the variable c.
 *     a and d are in their own block and not visible to
 *     the g function.
 *
 * (c) a and d are visible.
 *
 * (d) Nothing is visible here to the main function. You might
 *     think b and c which are the first declared variables will
 *     be visible but they are declared after the main function.
 */
