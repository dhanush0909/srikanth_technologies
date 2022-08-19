// To print whether the given year is leap year
#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    if(year%4==0)
        printf("Leap year");
    else
        printf("Not a Leap year");

}
