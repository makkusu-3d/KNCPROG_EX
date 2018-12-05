/**
 * The following function calls supposedly write a single
 * new_line character, but some are incorrect. Identify
 * which calls don't work and explain why.
 *
 * (a) printf("%c, '\n');
 *     This is correct the %c is a format specifier
 *     that accepts a single char type character. \n is
 *     being treated as an escape sequence - newline feed.
 *
 * (b) printf("%c", "\n");
 *     This is incorrect you can use a character format
 *     specifier with a string. This will give an error
 *     message.
 *
 * (c) printf("%s", '\n');
 *     This is incorrect. %s is a string format specifier
 *     which requires a string. '\n' is a char type where
 *     as string are of type char *.
 *
 * (d) printf("%s", "\n");
 *     This is correct
 *     \n Is treated as as an escape sequence - newline feed.
 *
 * (e) printf('\n');
 *     This is incorrect.
 *     printf expects an argument of type char * where
 *     '\n' is not but is an escape sequence character
 *
 * (f) printf("\n");
 *     This is correct. The printf function recognises
 *     \n as an escape sequence.
 *
 * (g) putchar('\n');
 *     This is correct. The putchar function recognises
 *     \n as an escape sequence.
 *
 * (h) putchar("\n");
 *     This is incorrect. The putchar function expects
 *     argument of type int and this is passing an
 *     argument of type char *
 *
 * (i) puts('\n');
 *     This is incorrect. The puts function expects
 *     an argument of type char * but is passed an
 *     argument of type char
 *
 * (j) puts("\n");
 *     This is correct. The puts function recognises
 *     the \n as a escape sequence new line character
 *
 * (k) puts("");
 *     This is incorrect. Only the NULL character is 
 *     being passed to the puts function.
 */
