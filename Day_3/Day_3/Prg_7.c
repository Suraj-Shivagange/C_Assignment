#include "Prg_7.h"

#include <stdio.h>



float function(float x)
{
    int i, k;
    int odd = 0;
    int factorial = 1;
    int range;
    
    
    printf("Enter the range: ");
    scanf("%d",&range);
    
    
    
    for(i=1; i<=range; i++)
    {
        
        if( (i % 2) == 0)
        {
            printf(" ");
        }
        else
        {
            odd = i;
            for(k=1;k<=odd;k++)
                factorial = factorial * k ;
                printf("%d", factorial);
        }
      
    
    }
  
    
    printf("\n");
    return 0;
}
