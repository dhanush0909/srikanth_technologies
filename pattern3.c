#include <stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}
