#include<stdio.h>
void main()
{
char name[30];
char address[100];
int age;
float height;
printf("enter name, age, address and height");
scanf("%s %d %s %f",&name,&age,&address,&height);
printf("Name\t:%s \nAge\t:%d \nAddress\t:%s \nHeight\t:%f",name,age,address,height);
}