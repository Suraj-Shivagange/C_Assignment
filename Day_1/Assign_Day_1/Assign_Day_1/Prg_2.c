
#include "Prg_2.h"

#include <stdio.h>


float area_of_circle(float R)
{
    float area;
    
    //printf("Enter the radius of circle: ");
    //scanf("%f",&R);
    
    area = (PIE * R * R);
    
    //printf("The area of the circle is %.3f \n\n",area);
    
    return area;
}
