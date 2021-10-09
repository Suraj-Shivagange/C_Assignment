
#include "Prg_7.h"

#include <stdio.h>
#include<math.h>

int arms(int n)          // while using assert put value of n
{
    int rem = 0;
    int sum= 0;
    
    //printf("enter the number: ");
    //scanf("%d",&n);
    
    while(n!=0)
    {
        rem = n % 10;               // remainder power gets multipled to power
        sum = sum + pow(rem,3);     // 3 and adds to sum, happens till n
        n /= 10;                    // becomes 0.
    }
    return sum;
}
