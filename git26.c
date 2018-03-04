#include <stdio.h>
int main()
{
   int arr1[5], i;
   
   printf(" Input 5 elements in the array \n");
   for(i=0;i<5;i++)
      {
	  scanf("%d",arr1+i);
	  }
   printf(" The elements you entered are : \n");
   for(i=0;i<5;i++)
      {
	  printf("%d \n",*(arr1+i));
	  }
	   return 0;
}
