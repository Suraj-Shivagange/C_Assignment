
#include "Prg_9.h"

#include <stdio.h>

int strln(int A[])
{
    printf("\n");
    
    int i;
    int size=0;
    
    for (i = 0; A[i] != '\0'; ++i)
        size=i;
    printf("The size is : %d ", size);
    
    
    
    return size;
   
}
