/* Program to identify the various integers in a
 * international standard book number (ISBN)
 */

#include <stdio.h>

int GS1_prefix, grp_iden, pub_code, item_num, chk_digit;

int main(void)
{
    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d",
          &GS1_prefix,&grp_iden,&pub_code,&item_num,&chk_digit);

    printf("GS1 prefix: %d\n",GS1_prefix);
    printf("Group Identifier %d\n", grp_iden);
    printf("Publisher code: %d\n",pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit %d\n", chk_digit);

    return 0;
}
