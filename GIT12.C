#include<stdio.h>
#include<conio.h>
void main()
{
int days,years,months,weeks;
clrscr();
printf("enter days");
scanf("%d",&days);
years=days/365;
months=days/30;
weeks=days/7;
printf("%dyears %dmonths %dweeks",years,months,weeks);
}