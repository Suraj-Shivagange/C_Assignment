
#include "Prg_6.h"
#include "stdio.h"

int leap(int year)
{
    
    //printf("Enter the year: ");
    //scanf("%d",&year);
    
    if ( ( ( year % 4 ) == 0 || ( year % 400 ) == 0 ) )
    {
        //printf("The given year is a leap year \n \n");
        return 0;
    }
    else
    {
        //printf("The given year is not a leap year \n\n");
        return 1;
    }
}
