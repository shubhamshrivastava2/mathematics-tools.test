#include<stdio.h>
void main()
{
 float x,y;
 char ch ;
 printf("Enter initial amount = Rs  ");
 scanf("%f", &x);
 printf("Enter your choice\n C for  credit amount\n D for  debit amount\n B for check amount \n");
 scanf("\n%c", &ch);
 switch(ch) 
 {
 case 'C':
 printf("Enter credit amount = Rs ");
 scanf("%f" , &y);
 x=x+y;
 printf("New Amount is = Rs %f", x);
 break;
 
 case  'D':
 
 printf("Enter debit amount = Rs ");
 scanf("%f", &y);
 if(x>=y)
 {
 x=x-y;
 printf("New amount is = Rs %f", x);
 }
 
 else
 {
 printf("Sorry insufficient amount in your account ");
 }
 break;
 
 case 'B':
 printf(" \n your account balance is  amount = Rs  %f" , x );
 
 
 break;
 
 
 default: 
 printf("\n please Enter correct option  for operations  ");
 }
 }
 