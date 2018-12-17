/**
 * Use the techniques of Section 13.6 to condense the
 * count_spaces function of Section 13.4. In particular
 * replace the for statement by a while loop.
 */

 // Preprocessing Directives
 #include <stdio.h>

 // External Variables
 char arr[8] = "a b c";

 // Function Prototypes
 int count_spaces(const char s[]);

 // Function Definitions
int main(void)
{
    printf("Count spaces: %d", count_spaces(arr));

    return 0;
}

int count_spaces(const char *s)
{
    int count = 0;

    while(*s++)
        if  (*s == ' ')
            count++;
    return count;
}
