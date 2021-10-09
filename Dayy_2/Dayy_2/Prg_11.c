
#include "Prg_11.h"

#include <stdio.h>

float bill(float units)
{
    printf("Enter the total units of electricity:  ");
    scanf("%f",& units);
    
    float first_200 = 200;
    float next_100 = 100;
    float beyound_300 =  units - (first_200 + next_100)  ;
    
    float charge_1 = first_200 *1;
    float charge_2 = next_100 *1.5;
    float charge_3 = beyound_300 * 2;
    
    float total;
    
    total = charge_1 + charge_2 + charge_3 ;
    
    
    printf("The total charges will be : %.3f \n", total) ;
    
    return total;
}
