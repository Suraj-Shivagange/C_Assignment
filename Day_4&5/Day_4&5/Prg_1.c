
#include"Prg_1.h"

#include<stdio.h>

int assending(int arr[],int size)
{
    int i,j,a;
    
    printf("The assending array is :");
    for (i = 0; i < size; i++)

    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return arr;
}


int decending(int arr[],int size)
{
    int i,j,a;
    
    printf("\n");
    printf("The decending array is :");
    for (i = 0; i < size; i++)

    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");

    return arr;
}

