/*

*****
****
***
**
*

*/

#include <stdio.h>
void main()
{
    int i,j,n;
    scanf("%d ",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)  // the number of columns to be printed be : n-i+1
        {
            printf("* ");
        }
        printf("\n");
    }
}
