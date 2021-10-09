
#include"Prg_7.h"

#include<stdio.h>

int power(int n)
{
    int i;
    int power = 0 ;
    
    //printf("Enter the value of n : ");
    //scanf("%d",&n);
    
    for (i=1 ; i<=n ; i++)
    {
        power = 1 << i; // logic of shift operator ( x * 2^Y), x can be kept                     1 and keep incrementing the value of y by 1.
        
    }
    
    //printf("the power of 2^n is : %d \n \n",power);

    
    return power;
    
}
