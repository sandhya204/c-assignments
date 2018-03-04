#include<stdio.h>
void main()
{
int age;
a:printf("enter your age:");
scanf("%d",&age);
if(age>=18&&age<=30)
printf("your age is %d",age);
else
{
printf("invalid age, please enter in range of 18-30\n");
goto a;
}
}
