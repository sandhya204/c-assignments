#include<stdio.h>
#include<conio.h>
void main()
{
int pin,atmpin=1234,amount=5000,op;
char balancecheck,withdraw,deposit;
clrscr();
printf("enter the pin");
scanf("%d",&pin);
printf("enter op");
scanf("%d",&op);
if(pin==atmpin)
{
switch(op)
{
case 1:printf("balance is %d",amount);
break;
case 2:printf("withdrawal is done");
break;
case 3:printf("deposit is done");
break;
default:printf("enter correct details");
exit(0);
}
}
while(pin!=atmpin)
{
printf("please enter coorect pin");
}
}
