#include<stdio.h>
#include<conio.h>
void main()
{
int hours,wage=100,weeklypay,dailypay;
clrscr();
printf("enter the hours");
scanf("%d",&hours);
dailypay=hours*wage;
printf("employe dailywage is %d\n",dailypay);
weeklypay=7*dailypay;
printf("weekly pay of employee is %d",weeklypay);
}

