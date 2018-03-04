#include<stdio.h>
#include<conio.h>
void main()
{
int totmin,min,hrs;
clrscr();
printf("enter total mins");
scanf("%d",&totmin);
min=totmin%60;
hrs=totmin/60;
printf("%dhrs%dmins",hrs,min);
}