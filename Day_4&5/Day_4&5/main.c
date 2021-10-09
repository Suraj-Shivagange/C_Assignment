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
#include "Prg_12.h"
#include "Prg_13.h"
#include "Prg_14.h"
#include "Prg_15.h"


#define VALID 0
#define INVALID 1

#include<stdio.h>
#include<assert.h>

#define SIZE 7
int main()
{
    int arr[] = {1,2,6,6,89,7,105};     // array used for assending and dec
    int A[] = {1,2,3,5,7,10,11,1,1}; // array for set program
    int B[] = {3,5,6,7,8,9,1};        // array for set program
    int C[] = {1,2,1,2,3,1,3,}; // arrary for duplicate program
    int D[] = {4,5,2,5,6,4,7};
    char str[] = {"abcdefg"};
    char sente[] ={"SURAJ"}; // not working check it 
    
    int mat[5][5];
    int m1[3][3]={{1,2,3},{1,2,3},{3,4,5}};
    int m2[3][3]={{1,2,3},{1,2,3},{3,4,5}};
    int m3[2][2]={{1,0},{0,0}};
    
    
   
    assert(assending(arr, SIZE));
    assert(decending(arr, SIZE));
    
    swap(5, 6);
    
    set_union(A, B, SIZE);
    set_intersection(A,B,SIZE);
    //set_difference(A,B,SIZE);
    
    assert(find_max_min(A, SIZE,0,6) == VALID);
    
    assert((remove_duplicate_elements(C, SIZE)) == VALID);
    
    assert(search(A, SIZE, 7) == 7);
    //in array A search the element in arg 3 if present then returns 0 which is valid and if not present results in error which is returns 1.
    
    assert(binarysearch(C, 0, SIZE -1 , 5) == 0);
    // if the element is present in the array returns 0 else returns 1
    // if we need the index of the element present we need to use a variable and assign the binary search function using if == 0 assign the element to variable else return element not present.
        
    assert(poc(D,SIZE)==129);
    
    // check if the desired result is equal to the array sum.
    
    assert(strln(A)==9);
    
    date_format(5, 2, 2012);
    
    upper(str);
    
    rev(sente);
    
    mat_5(mat);
    sum_matr(m1,m2);
    
    
    
    sparse(m3); // redit code so as to make use of assert later on.
    
    return 0;
}
