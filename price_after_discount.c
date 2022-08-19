// To print net amount for given price 
#include<stdio.h>
void main()
{
  int sm=1;
  float price,net_price, quantity;
  float discount = 20.0/100.0;
  float discount_amount;
  float tax_amount;
  float tax = 12.0/100.0;
  printf("Enter the price and quantity : \n");
  scanf("%f %f",&price, &quantity);
  price*=quantity;
  discount_amount=price*discount;
  price-=discount_amount;
  tax_amount=price*tax;
  net_price=tax_amount+price;
  printf(" price         :     %7.2f\n discount      :     %7.2f\n tax           :     %7.2f\n ------------------------------\n net price     :     %7.2f\n", price+discount_amount,discount_amount, tax_amount, net_price);
  printf("Please visit again %c",sm);
}
