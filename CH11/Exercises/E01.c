/**
 * If i is a variable and p points to i, which of the
 * following expressions are aliases for i?
 *
 * (a) *p  -> This is an alias for i
 * (b) &p  -> This is the address for p therefore
 *            not an alias for i
 * (c) *&p -> * and & are inverses therefore
 *            this becomes p which equates to
 *            address of i therefore is not an
 *            alias
 * (d) &*p -> Same as (c)
 * (e) *i  -> Not an alias since this there is no
 *            pointer of i since it is a variable
 * (f) &i  -> This is the address for i and therefore
 *            not an alias
 * (g) *&i -> This is an alias since the indirect operator
 *            is acting on the address of i which gives
 *            the value of i
 * (h) &*i -> There is no pointer of i therefore no address
 *            making it an invalid argument
 */
