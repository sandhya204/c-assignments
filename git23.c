#include <stdio.h> 
int main()
{
    int arr[10],occ[100];
    int i, j, max, min, count, maxo, ocr;
    printf("Enter 10 numbers into the array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        occ[i] = -1;
    }
    max = arr[0];
    min = arr[0];
	maxo = 0;
        for(i=1; i<10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
	for(i=0; i<10; i++)
    {
        count = 1;
        for(j=i+1; j<10; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                occ[j] = 0;
            }
        }
        if(occ[i] != 0)
        {
            occ[i] = count;
        }
    }
	 for(i=0; i<10; i++)
    {
        if(occ[i] > maxo)
        {
            maxo = occ[i];
            ocr=arr[i];
        }
       
    }
    	
             printf("\nthe most occuring element is %d, it occurs %d times in array",ocr,maxo);

    return 0;
}

