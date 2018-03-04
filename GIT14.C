#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],ch;
int i,fr=0;
clrscr();
printf("enter the string");
gets(str);
printf("enter character");
scanf("%c",&ch);
for(i=0;str[i]!='\0';i++)
{
if(ch==str[i])
++fr;
}
printf("frequency of %c is %d",ch,fr);
}
