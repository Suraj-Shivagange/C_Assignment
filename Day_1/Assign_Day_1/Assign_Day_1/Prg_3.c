
#include"Prg_3.h"

#include <math.h>
#include<stdio.h>

double SI(float R, float P, float T)
{
    float SI;
    float CI;
    //printf("Enter the Interest Rate: ");
    //scanf("%f",&R);
    
    //printf("Enter the Principle Rate: ");
    scanf("%f",&P);
    
    //printf("Enter the Time of interest: ");
    //scanf("%f",&T);
    
    SI =  P * T * R;
    
    CI = ( P * (pow((1 + R),T ))-T );
    
    //printf("The Simple_interest is : %f \n\n",SI);
    //printf("The Compound interest is : %f \n\n ",CI);
    
    return SI;
    
}
