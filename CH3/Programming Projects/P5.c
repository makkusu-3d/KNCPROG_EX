/* Program that asks the user to enter the numbers from 1 to 16
 * (in any order) and then displays the numbers in a 4 by 4
 * arrangement, followed by the sums of the rows, columns,
 * and diagonals
 */

#include <stdio.h>

int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,
 sum_row, sum_columns, sum_diagonals;


int main(void)
{
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d",
          &i1,&i2,&i3,&i4,&i5,&i6,
          &i7,&i8,&i9,&i10,&i11,&i12,
          &i13,&i14,&i15,&i16);

    printf("\n%d %d %d %d\n", i1, i2, i3, i4);
    printf("%d %d %d %d\n", i5, i6, i7, i8);
    printf("%d %d %d %d\n", i9, i10, i11, i12);
    printf("%d %d %d %d\n", i13, i14, i15, i16);

    printf("\nRow sums: %d %d %d %d\n", i1+i2+i3+i4, i5+i6+i7+i8,
           i9+i10+i11+i12, i13+i14+i15+i16);

    printf("Column sums: %d %d %d %d\n", i1+i5+i9+i13, i2+i6+i10+i14,
           i3+i7+i11+i15, i4+i8+i12+i16);

    printf("Diagonal sums: %d %d\n", i1+i6+i11+i16, i13+i10+i7+i4);

    return 0;
}
