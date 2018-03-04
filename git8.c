#include<stdio.h>
#include<stdlib.h>
int mod,m;
char c;
void main()
{
printf("enter percentage:");
scanf("%d",&m);

if(m>=0&&m<=60)
{
printf("grade F");
exit(0);
}
else if(m>=61&&m<=70)
{
printf("grade D%c",c);
}
else if(m>=71&&m<=80)
{
printf("grade C%c",c);
}
else if(m>=81&&m<=90)
{
printf("grade B%c",c);
}
else
{
printf("grade A%c",c);
}
mod=m%10;
if(mod>=1&&mod<=3)
printf("-");
else if(mod>=4&&mod<=7)
printf(" ");
else
printf("+");
}
 
