
#include "amount"
WELCOME IN SBI BANK ;
 ENTER YOUR PIN NUMBER ;
 CHOICE SAVING CURRENT  ;
 WITHDRAW AMOUNT ; CHANGE PIN;BALANCE CHECK; MINI SATTEMENT ;
  THANK YOU ;                    
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
 