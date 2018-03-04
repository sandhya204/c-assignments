#include<stdio.h>
typedef struct complex
{
	float real,imag;
}complex;
complex addition(complex n1,complex n2);
int main()
{
complex n1,n2,temp;
printf("for the first complex number\n");
printf("enter real and imag parts:\n");
scanf("%f%f",&n1.real ,&n1.imag);
printf("\nfor the second complex number\n");
printf("enter real and imag parts:\n");
scanf("%f%f",&n2.real ,&n2.imag);
temp=addition(n1,n2);
printf("sum=%.1f+%.1fi",temp.real,temp.imag);
return 0;
}
complex addition(complex n1,complex n2)
{
	complex temp;
	temp.real=n1.real+n2.real;
	temp.imag=n1.imag+n2.imag;
	return(temp);
}
