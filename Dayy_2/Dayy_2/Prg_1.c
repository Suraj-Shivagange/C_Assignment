#include<stdio.h>

#include "Prg_1.h"



int sum_of_number(int number)
{
    int i;
    int remainder;
    int sum = 0;
    printf("Enter the number: ");
    scanf("%d",&number);
    while (number != 0)
        {
            remainder = number % 10;
            sum = sum + remainder;
            number /= 10;
        }
    printf("%d \n",sum);
    return sum;
        
}

