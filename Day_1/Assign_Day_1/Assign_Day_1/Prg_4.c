
#include "Prg_4.h"

#include<stdio.h>

float temp(float C)
{
    float F;
    
    //printf("Enter the value of celcius: ");
    //scanf("%f",&C);
    
    F = (C * 1.8) + 32 ;
    
    //printf("The Temperature in Fahrenheit %.2f degrees \n\n", F);
    
    return F;
}
