#include <assert.h>
#include <stdio.h>
#include "Prg_1.h" // sum of a given number 
#include "Prg_2.h" // reversing a given digits
#include "Prg_3.h" // counting the number of digits in a number
#include "Prg_4.h" // checking if number is palindrome 
#include "Prg_5.h"
#include "Prg_6.h"
#include "Prg_7.h"
#include "Prg_8.h"
#include "Prg_9.h"
#include "Prg_10.h"
#include "Prg_11.h"

#define SIZE 5
#define VOLUME 0

int test_prime();





int main()
{

    
    assert(sum_of_number(12345) == 15);
    assert(reverse_of_a_number(12345) == 54321);
    assert(digit_count(1234) == 4);
    assert(number_pali(12321) == 12321);
    test_prime();
    assert(sum_of_series(4)==10);
    assert(arms(153)==153);
    assert(amicable(220,284)==0); // if u put == 1 and put non amicable                                     number the assert will be true.
    assert(sum(5, 6) == 11);
    assert(differece(5, 7) == -2);
    assert(product(5, 5) == 25);
    assert(cube_vol(5, 125) == 125);
    assert(cuboid_vol(5, 5, 5, VOLUME) == 125);
    assert(bill(400) == 550);
    
    

    return 0;
}

 int test_prime()
{
    prime_number(5);
    return 0;
} 




