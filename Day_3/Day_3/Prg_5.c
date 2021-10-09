
#include "Prg_5.h"

#include <stdio.h>
#include <math.h>

int power(int base)
{
    int power;
    int value = 0;
    
    printf("Enter the power needed for number: ");
    scanf("%d",&power);
    value = pow(base,power);
    printf("%d \n", value);
    
    return value;
}
