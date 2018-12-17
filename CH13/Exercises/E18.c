/**
 * Write the following function:
 *
 * void remove_filename(char *url);
 *
 * url points to a string containing a URL. (Uniform
 * Resource Locator) that ends with a file name
 * (such as "http://www.knking.com/index.html). The
 * function should modify the string by removing
 * the file name and the preceding slash. (In this example
 * the result will be "http://www.knking.com".)
 * Incorporate the "search for the end of a string"
 * idiom into your function. Hint: Have the function
 * replace the last slash in the string by a null
 * character.
 */

 // Preprocessing Directives
 #include <stdio.h>
 #include <string.h>

 // External Variables
 char str_arr[30] = "http://www.knking.com/index.html";

 // Function Prototypes
void remove_filename(char *url);

 // Function Definitions
 int main(void)
 {
    remove_filename(str_arr);

    printf("%s", str_arr);

    return 0;
 }

 void remove_filename(char *url)
 {
     char *ptr = url;
     char ptr2[20] = "";
     int i = 0;

     while(*ptr++) {

        if (*ptr == 'w') {

            while(*ptr != '/') {
                ptr2[i++] = *ptr++;
            }
            ptr2[i] = '\0';
            strcpy(str_arr, ptr2);
            break;
        }
     }

 }
