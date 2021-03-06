/**
 * Write the following function:
 *
 * void build_index_url(const char *domain, char *index_url);
 *
 * domain points to a string containing an Internet domain
 * such as "knking.com". The function should add
 * "http://www." to the beginning of this string and
 * "/index.html" to the end of the string, storing the result
 * in the string pointed to by index_url. (In this example
 * the result will be "http://www.knking.com/index.html".)
 * You may assume that index_url points to a variable
 * that is long enough to hold the resulting string.
 * Keep the function as simple as possible by having it use
 * the strcat and strcpy functions.
 */

// Preprocessing Directives
#include <stdio.h>
#include <string.h>

// External Variables
char *domain = "knking.com";
char index_url[100] = "";

// Function Prototypes
void build_index_url(const char *domain, char *index_url);

// Function Definitions
int main(void)
{
    build_index_url(domain, index_url);

    printf("%s", index_url);

    return 0;
}
void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}
