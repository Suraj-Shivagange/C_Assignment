
#include "Prg_1.h"
#include "Prg_2.h"
#include "Prg_3.h"
#include "Prg_4.h"
#include "Prg_5.h"
#include "Prg_6.h"
#include "Prg_7.h"
#include "Prg_8.h"
#include "Prg_9.h"
#include "Prg_10.h"
#include "Prg_11.h"

#include <stdio.h>
#include <assert.h>
#include <math.h>

#define SIZE 7
#define VALID 0 // when 0 means the assert is correct
#define INVALID 1 // when 1 means the assert is wrong
#define NUMBER_1 1
#define NUMBER_2 5
#define SQUARE_NUMBER 5


int main()
{
    int arr[SIZE] = {0,0,1};
     assert(decimal(101)==5);
     assert(sequence(arr, SIZE) == 0);
     assert(design(5) == 0);
     assert(digits(20) == 0);
     assert(power(5) == 125); // power input is done by user in the terminal.
     assert(frac(5) == 120);
     function(5);
     concatenate(NUMBER_1, NUMBER_2);
     assert(square(SQUARE_NUMBER) == 25) ;
     assert(sqr(5));
     assert(natural_log(5));
     assert(log_10(5));
     assert(power_(5, 5));
     assert(cos_(5));
    
    
    return 0;
    
}


