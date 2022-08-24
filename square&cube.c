//To find the square and cube of a given number
#include<stdio.h>
void main()
{

    int n,i,m;
    for(i=2;i<25;i=i+2)
    {
        n=i*i; //n=sqrt(i);
        printf("Square is : %d \n",n);
        m=i*i*i;
        printf("cube is   : %d\n",m);

    }
}
