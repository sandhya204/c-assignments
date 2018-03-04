#include<stdio.h>
    int a,b;
main()
{
    printf("\n Enter the first number: ");
    scanf("%d",&a);
    printf(" Enter the second number: ");
    scanf("%d",&b);
    
    printf("\nThe largest number is: %d",Max(a,b));
   
    printf("\nThe smallest number is: %d", Min(a,b));
}
int Min(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int Max(int a,int b)
{
    if(a<b)
    return a;
    else 
    return b;
}
