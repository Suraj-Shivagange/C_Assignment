
#include <stdio.h>
#include <stdlib.h>

#include "Prg_4.h"

int find_max_min(int A[], int size, int *min , int *max)
{
    printf("\n");
    
    int i;
    
    int max_is;
    int min_is;
    
    int _max = A[0];  // value is stored
    max = &_max;        // address is stored in max
    max_is = *max;       // value is stored bk in max_is
    
    int _min = A[0];
    min = &_min;
    min_is = *min;
    
    for(i=0; i<size; i++)
        {
             if(_min>A[i])
              min_is=A[i];    // min_is is where the result has to be stored
        }
    for(i=0; i<size; i++)
    {
            if(_max<A[i])
                min_is=A[i];
    }
    _min = *min;
    _max = *max;
    printf("The min element is : %d ",min_is);
    printf("\n");
    printf("The max element is : %d ",max_is);
    printf("\n");
    return 0;
}

