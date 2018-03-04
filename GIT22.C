#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is bigger number\n");
}
else if(b>a&&b>c)
{
printf("b is biggeer number\n");
}
else if(c>a&&c>b)
{
printf("c is bigger number\n");
}
if(a<b&&a<c)
{
printf("a is smaller number\n");
}
else if(b<a&&b<c)
{
printf("b is small number\n");
}
else
{
printf("c is smaller number\n");
}
}
