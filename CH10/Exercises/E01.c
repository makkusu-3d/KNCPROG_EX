/** The following program outline shows only function definitions
  * and variable declarations
  *
  * int a;
  *
  * void f(int b)
  * {
  *    int c;
  * }
  * void g(void)
  * {
  *    int d;
  *    {
  *      int e;
  *    }
  * }
  * int main(void)
  * {
  *    int f;
  * }
  *
  * For each of the following scopes, list all variable and
  * parameter names visible in that scope;
  * (a) The f function
  * (b) The g function
  * (c) The block in which e is declared
  * (d) The main function
  *
  * (a) visible variables:  a, c
  *     visible parameters: b
  *
  * (b) visible variables:  d
  *
  * (c) visible variables:  e
  *
  * (d) visible variables:  none as these are declared after the
  *                         main function.
  *
  *     For example:
  *
  *     int main(void)
  *     {
  *         ...
  *     {
  *     int a;
  *     ..........
  */

