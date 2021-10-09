

#include "Prg_1.h"
#include <stdio.h>

int decimal(int n)
{
    int rem = 0;
    int base = 1;
    int decimal = 0;
    
    printf("Enter the binary number: ");
    scanf("%d",&n);
    
    while (n > 0)
    {
        rem = n % 10;
        decimal = decimal + rem * base;
        n /= 10;
        base = base * 2;
    }
    printf("binary %d \n", decimal);
    
    return decimal;
    
}
