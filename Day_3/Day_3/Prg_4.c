
#include "Prg_4.h"

#include <stdio.h>

int digits(int range)
{
    int i, j;
    
    printf("Enter the range of number: ");
    scanf("%d", &range);
    
    for(i=0;i<=range;i++)
    {
        for(j=0;j<=range;j++)
            if((i+j) == 7)
                printf("%d%d ",i,j);
    }
    printf("\n ");
    return 0;
}
