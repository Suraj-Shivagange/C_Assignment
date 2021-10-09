
#include "Prg_8.h"

#include<stdio.h>

int amicable(int a, int b)
{
    int i;
    int j;
    int sum_of_a = 0;
    int sum_of_b = 0;
    
    {
    for(i=1; i<a; i++)
        if(a % i==0)                // checks for proper divisor
            sum_of_a = sum_of_a + i; // adds all the proper divisor
    //printf("%d \n",sum_of_a);
    
    for(j=1; j< b ;j++)
        if(b % j == 0)              // checks for proper divisor
            sum_of_b = sum_of_b + j;    // adds all the proper divisor
    //printf("%d \n",sum_of_b);
    }
    
    if ((sum_of_b == a)&&(sum_of_a == b)) // checks the values are equal
    {
        return 0; // if the value are equal returns 0
    }
    else
    {
        return 1; // if the value are not equal returns 1
    }
    return 0;   
}
