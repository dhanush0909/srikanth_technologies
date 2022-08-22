#include <stdio.h>
void main()
{
    int n;
    printf("Enter the month number : \n");
    scanf("%d",&n);
    if(n==1||n==5||n==3||n==7||n==9||n==11)
    {
        printf("The number of days are : 31");
    }
    else
        if(n==4||n==6||n==8||n==10||n==12)
           {
             printf("The number of days are : 30");
           }
        else
            printf("The number of days are : 28");
}
