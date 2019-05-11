#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n)
{
    int ch, i = 0;

    ch = getchar();
    
    // Took isspace fuunctionality away in order to be able to allow '\n' 
    // which causes to while condition to be false immediately
    // and i to zero
    
    /**
    while (isspace(ch = getchar())) 
         ;
    }
    **/

    while (ch != '\n' && ch != EOF) { // This should straight away if ch == '\n'
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}

