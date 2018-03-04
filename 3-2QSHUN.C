#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,num;
float *data;
printf("enter total number of elements(1 to 100):\n");
scanf("%d",&num);
data=(float*) calloc(num,sizeof(float));

if (data== NULL)
{
printf("error !!! memory not allocated");
exit(0);
}
printf("\n");

for (i=0;i<num;++i)
{
printf("enter the number%d",i+1);
scanf("%f",data+i);
}


for(i=1;i<num;++i)
{
if(*data < *(data+i))
*data = *(data+i);
}

printf("largest element = %.2f",*data);
return 0;
}
