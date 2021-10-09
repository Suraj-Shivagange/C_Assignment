
#include "Prg_8.h"

#include <stdio.h>

int poc(int D[], int size)
{
    printf("\n");
    
    int i,j;
    
    int sum = 0;
    
    for(i=0; i <size; i++)
        sum = sum + (D[i]*D[i+1]);
    
    printf(" %d ", sum);
    
    return sum;
    
    printf("\n");
    
    
}
