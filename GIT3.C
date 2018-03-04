#include<stdio.h>
#include<conio.h>
void main()
{
int num,n,i,sum=0,large=0;
clrscr();
printf("Enter n inputs u want:\n");
scanf("%d",&num);
printf("Enter %d values:\n",num);
for(i=1;i<=num;i++)
{
scanf("%d",&n);
sum=sum+n;
if(large<n)
{
large=n;
}
}
printf("large number:%d\n",large);
printf("Sum is:\n%d",sum);
}
