
#include "Prg_10.h"

#include <stdio.h>
#include <math.h>
#define PI 3.14

float cube_vol(float a,float volume)
{
    printf("Enter value of side: ");
    scanf("%f",&a);
    volume = (a*a*a);
    printf("the volume is: %.3f \n",volume);
    return volume;
}

float cuboid_vol(float l, float w, float h, float volume)
{
    printf("Enter the value of length and width and height respectively \n ");
    scanf("%f\n %f\n %f",&l, &w, &h);
    volume = l * w * h;
    printf("the volume is: %.3f \n",volume);
    return volume;
    
}

float sphere_vol(float r, float volume)
{

    printf("Enter value of radius: \n ");
    scanf("%f \n",&r);
    volume =  ((4/3)*PI*r*r*r);
    printf("the volume is: %.3f \n",volume);
    return volume;
    
}

float cylinder_vol(float r, float h, float volume)
{
    printf("Enter the value of radius and height respectively \n");
    scanf("%f \n %f \n", &r, &h);
    volume = (PI*r*r*h);
    printf("the volume is: %.3f \n",volume);
    return volume;
    
}

float cone_vol(float r, float h, float volume)
{
    printf("Enter the value of radius and height respectively \n");
    scanf("%f \n %f \n",&r, &h);
    volume = (PI * r * r *(h/3));
    printf("the volume is: %.3f \n",volume);
    return volume;
}











/*
int options(int opt)
{
    printf("Enter the option number 1)CUBE 2)CUBOID 3)SPHERE 4)CYLINDER 5)CONE \n ");
    scanf("%d",&opt);
    int a;
    float area;
    
    switch (opt) {
        case 1:
            printf("Enter the value of side: ");
            scanf("%d",&a);
            area = a*a*a;
            printf("Volume of cube is : %.3f",area);
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            
            
        default:
            break;
    }
    return 0;
}
*/

