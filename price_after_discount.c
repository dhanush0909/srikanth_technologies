#include<stdio.h>
void main()
{
float price, quantity;
float discount = 20.0/100.0;
float discount_amount;
printf("Enter the price and quantity : \n");
scanf("%f %f",&price, &quantity);
printf("Price after discount : ");
discount_amount=price*discount;
price-=discount_amount;
price*=quantity;
printf("%f",price);
}
