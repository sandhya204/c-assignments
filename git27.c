#include <stdio.h>
int main()
{
int m,n,c,d,m1[10][10],m2[10][10],sum[10][10];
printf("Enter the number of rows and columns of matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the elements of matrix 1\n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&m1[c][d]);
printf("Enter the elements of matrix 2\n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d",&m2[c][d]); 
printf("Sum of entered matrices:-\n");
for(c=0;c<m;c++) 
{
for(d=0;d<n;d++)
{
sum[c][d]=m1[c][d] + m2[c][d];
printf("%d\t",sum[c][d]);
}
printf("\n");
}
}
