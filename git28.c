#include <stdio.h>
main()
{
int arr[5],i;
printf("Enter elements: ");
for(i=0;i<5;++i)
scanf("%d",arr+i);
printf("You entered: \n");
for(i=0;i<5;++i)
printf("%d\n",*(arr+i));
}
