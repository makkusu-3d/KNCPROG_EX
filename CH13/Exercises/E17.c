/**
 * Write the following function:
 *
 * bool test_extension(const char *file_name,
 *                     const char *extension);
 *
 * file_name points to a string containing a file name.
 * The function should return true if the file's extension
 * matches the string pointed to by extension, ignoring
 * the case of letters. For example,
 * the call test_extension("memo.txt, "TXT") would return
 * true. Incorporate the "search for the end of a string"
 * idiom into your function. Hint: Use the toupper function
 * to convert characters to upper-case before comparing
 * them.
 */

 // Preprocessing Directives
 #include <stdio.h>
 #include <stdbool.h>
 #include <ctype.h>

 // External Variables
 char file_name_arr[9] = "memo.txt";
 char extension_arr[4] = "TXT";

 // Function Prototypes
 bool test_extension(const char *file_name,
                     const char *extension);

 // Function Definitions
 int main(void)
 {
    printf("Test extension: %d", test_extension(file_name_arr, extension_arr));

    return 0;
 }

 bool test_extension(const char *file_name,
                     const char *extension)
 {
    const char *ptr = file_name;
    const char *ptr2 = extension;
    bool extension_match;

    while (*ptr++) {
        if (*ptr == '.') {
            *ptr++;
            while (*ptr != '\0') {
                if (toupper(*ptr++) == toupper(*ptr2++)) {
                    extension_match = 1;
                }
                else {
                    return 0;
                    break;
                }
            }
            return extension_match;
        }
    }
 }
