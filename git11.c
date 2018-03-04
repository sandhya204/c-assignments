#include<stdio.h>
void main()
{
	int w=1,i;
	char str[100];
	printf("Enter string : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]==' ')
	w++;
        }
	printf("\n no. of words are %d",w);	
}