#include<stdio.h>
#include<conio.h>
void main()
{
int hrs,mins,sum,time;
clrscr();
printf("enter hrs");
scanf("%dhrs",&hrs);
printf("enter mins");
scanf("%d",&mins);
time=hrs*60;
sum=time+mins;
printf("%dmins",sum);
}

