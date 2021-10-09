#define SIZE 10
#include "Prg_2.h"

#include <stdio.h>

int sequence(int arr[], int size)
{
    
    int i;
    for(i=0;i<size;i++)
    {
        arr[3 + i] = (arr[0 + i ] + arr[ 1 + i ] + arr[ 2 + i ]);
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
    

    
    
}
