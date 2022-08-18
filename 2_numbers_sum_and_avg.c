// Assignment 4 : To print the sum and average of two given numbers
#include<stdio.h>
void main()
{
    float a,b, sum, avg;
    printf("Enter the values of 'a' and 'b' \n");
    scanf("%f %f",&a, &b);
    sum=a+b;
    avg=sum/2;
    printf("The sum and avg are %.2f and %.2f respectively", sum ,avg);
}
