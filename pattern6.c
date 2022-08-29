/*

*
**
***
****
*****
****
***
**
*

*/

#include <stdio.h>
void main()
{
    int i,j, n,no_of_columns;

    scanf("%d",&n);
    for (int row = 0; row < 2 * n; row++) {
            int totalColsInRow = row > n ? 2 * n - row: row;

            int noOfSpaces = n - totalColsInRow;
            for (int s = 0; s < noOfSpaces; s++) {
                printf(" ");
            }

            for (int col = 0; col < totalColsInRow; col++) {
                printf("* ");
            }
              printf("\n");
        }
    }
