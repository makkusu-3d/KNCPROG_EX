/**
 * Write the following function:
 *
 * void get_extension(const char *file_name, char *extension);
 *
 * file_name points to a string containing a file name.
 * The function should store the extension on the file
 * name in the string pointed to by extension. For example,
 * if the file name is "memo.txt", the function will store
 * "txt" in the string pointed to by extension. If the file
 * name doesn't have an extension, the function should
 * store an empty string (a single null character) in the
 * string pointed to by extension. Keep the function as
 * simple as possible by having it use the strlen and
 * strcpy functions.
 */


// Preprocessing Directives
#include <stdio.h>
#include <string.h>

// External Variables
char file_name[9] = "memo.jpg";
char extension[20] = "";

// Function Prototypes
void get_extension(const char *, char *);
void print_string(char *str);

// Function Definitions
int main(void)
{
    get_extension(file_name, extension);
    printf("%s", extension);
    return 0;
}

// Working Function
void get_extension(const char *file_name, char *extension)
{
    const char *ptr = file_name;

    while(1) {
        if (*ptr++ == '.') {
            break;
        }
    }
    strcpy(extension, ptr);
}

 void print_string(char *str)
{
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}

