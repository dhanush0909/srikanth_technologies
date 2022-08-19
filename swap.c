// To swap two given numbers
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers to be swapped \n");
    scanf("%d %d",&a, &b);

    a=a+b;  //holds total
    b=a-b;  //holds 'a' value
    a=a-b;  //holds 'b' value
    printf("The swapped vales are : \n 'a' = %d \n 'b' = %d",a,b);
}
