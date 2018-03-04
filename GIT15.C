#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0;
clrscr();
printf("enter num");
scanf("%d",&num);
while(num>0)
{
sum+=num%10;
num=num/10;
}
printf("sum of digits %d",sum);
}


