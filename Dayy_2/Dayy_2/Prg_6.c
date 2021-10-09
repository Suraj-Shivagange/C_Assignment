
#include "Prg_6.h"

#include<stdio.h>

int sum_of_series(int n)
{
    int i;
    int j, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
        for(j=i; j<=i; j++)
            sum = sum + j;
    printf("%d \n",sum);
    return sum;
}
        
