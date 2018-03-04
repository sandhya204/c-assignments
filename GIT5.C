#include<stdio.h>
#include<conio.h>
main()
{
int hh,mm,ss;
a:printf("enter hh,mm,ss");
scanf("%d%d%d",&hh,&mm,&ss);
if(hh>0&&hh<=24&&mm>0&&mm<=59&&ss>0&&ss<=59)
printf("valid time is %d:%d:%d",hh,mm,ss);
else
{
printf("enter valid time format");
goto a;
}
getch();
return 0;
}
