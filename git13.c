#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int n,c=0;
char str[100];
clrscr();
printf("enter a value:");
scanf("%d",&n);
itoa(n,str,2);
printf("the binary value of %d is %s",n,str);
while(n!=0)
{
if(n&1==1)
{
break;
}
else
{
c++;
n=n>>1;
}
}
printf("\nnumber of trailing zeros for the given number is %d",c);
getch();
return 0;
} 