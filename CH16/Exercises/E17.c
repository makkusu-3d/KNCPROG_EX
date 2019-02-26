/** see question in book **/

enum {FALSE, TRUE} b;
int i;

/** (a) -> Legal & safe
 *  (b) -> Legal & unsafe (Assigning a value other then what is into enumeration)
 *  (c) -> Legal & unsafe (dependent on the value of b before incrementation)
 *  (d) -> Legal & safe
 *  (e) -> Legal & safe
 */
