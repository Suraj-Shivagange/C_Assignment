#include "Prg_6.h"

#include <stdio.h>

int frac(int n)
{
    int value = 1;
    int i;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
        value = value * i ;
    printf("The factorial value is %d \n",value);
    
    return value;
}
