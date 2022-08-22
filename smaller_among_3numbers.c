#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("%d is smaller ",a);
        }
    }
    else
    {
      if (b < c)
            printf("%d is smaller",b);
        else
            printf("%d is smaller" ,c);
    }
}

