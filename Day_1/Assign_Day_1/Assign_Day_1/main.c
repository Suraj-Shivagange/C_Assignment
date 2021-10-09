// since we are just gonna use assert function and test we can remove the printf statements for displaying throught the assignment

// using printf statemnt for easier understanding.



#include<stdio.h>
#include<string.h>
#include <assert.h>

#include "Prg_1.h"

#include "Prg_2.h"

#include "Prg_3.h"

#include"Prg_4.h"

#include"Prg_5.h"

#include"Prg_6.h"

#include "Prg_7.h"

#define SIZE 5
#define INVALID 1 //  its odd  // not leap year
#define VALID 0   //  its even //  leap year


int main()
{
    char str[] = {"abcd"}; // add assert function
    upper_case(str);
    
    assert(area_of_circle(5) == 78.5);
    
    
    assert(SI(4, 3, 2) );
    
    assert(temp(5)==41.00);
    
    assert(odd_even(5)== INVALID);
    
    assert(leap(2014) == INVALID);
    
    assert(power(5) == 32 );
    
    return 0;
    
}









