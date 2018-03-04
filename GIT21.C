#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,op;
char ch;
clrscr();
do
{
printf("enter a,b values");
scanf("%d%d",&a,&b);
printf("enter your choice");
scanf("%d",&op);
switch(op)
{
case 1:c=a+b;
     printf("sum is %d",c);
     break;
case 2:c=a-b;
     printf("sub is %d",c);
     break;
case 3:c=a*b;
      printf("multiplication is %d",c);
      break;
case 4: c=a/b;
     printf("division is  %d",c);
     break;
case 5:c=a%b;
     printf("modulas is %s",c);
     break;
case 6:exit(0);
}
}
while(ch=='y');
}