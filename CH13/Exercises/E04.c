/**
 * Modify the read_line function in each of the following
 * ways:
 *
 * (a) Have it skip white space before beginning to store
 *     store input characters.
 */
 
 int read_line(char str[], int n)
{
    char ch;
    int i = 0;


    while (scanf("%1c", &ch))
        if (ch != ' ') {
            str[i++] = ch;
            break;
        }

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';      // terminates string
    return i;           // number of characters stored
}

/**
 * (b) Have it stop reading at the first white-space
 *     character. Hint: To determine whether of not
 *     a character is white space, call the isspace
 *     function.
 */
 
 int read_line(char str[], int n)
{
    char ch;
    int i = 0;

    while ((ch = getchar()) != '\n') {

        if (i < n) {
            str[i] = ch;
        }
        if (isspace(str[i])) {
            str[i] = '\0';
            break;
        }
        i++;
    }
    printf(" i : %d", i);

    return i;
}

/**
 * (c) Have it stop reading at the first new-line character
 *     then store the new-line character in the string.
 */
 
 int read_line(char str[], int n)
{
    char ch;
    int i = 0;

    while (ch = getchar()) {

        if (i < n) {
            str[i] = ch;
        }
        if (str[i] == '\n') {
            break;
        }
        i++;
    }
    str[i] = '\0';

    return i;
}

/**
 * (d) Have it leave behind characters that it doesn't have
 *     room to store.
 */
 
 int read_line(char str[], int n)
{
    char ch;
    int i = 0;

    while (1) {

        ch = getchar();
        if (i < n) {
            str[i] = ch;
        } else {
            break;
        }
        i++;
    }
    str[i] = '\0';

    return i;
}
 
