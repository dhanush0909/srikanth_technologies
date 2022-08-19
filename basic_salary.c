#include <stdio.h>
void main()
{
    int basic_salary;
    float hra_salary,da_salary,salary, hra=30.0/100.0, da=15.0/100.0;
    //input
    printf("Enter the basic salary : ");
    scanf("%d",&basic_salary);
    //process
    hra_salary=basic_salary*hra;
    da_salary=basic_salary *  da;
    //printing the desired output
    printf("The total salary including 'hra' of 30% and 'da' of 15% is : %.2f",hra_salary+da_salary+basic_salary);
}
