
#include "Prg_2.h"

#include <stdio.h>

int swap(int a, int b)
{
    printf("\n");
    
    int c = 0;
    c = a;
    a = b;
    b = c;
    printf("after swapping a and b are: %d & %d \n",a,b);
    return 0;
}
