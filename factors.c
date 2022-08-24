// To find the factors of a given number
#include <stdio.h>
void main()
{
    int num,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            printf("%d is a factor  \n",i);
    }
}
