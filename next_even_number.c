#include <stdio.h>
void main(){
int n;
printf("Enter the number : \n");
scanf("%d",&n);
if(n%2==0){
n=n+2;
}
else
    ++n;
printf("The next even number is : %d",n);
}
