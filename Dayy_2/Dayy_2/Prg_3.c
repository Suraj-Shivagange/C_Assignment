
#include "Prg_3.h"

#include <stdio.h>

int digit_count(int n)
{
    int count = 0;
    printf("Enter the digit: ");
    scanf("%d",&n);
    
        while (n != 0)
        {
            n = n / 10;
            ++count;
        }
        return count;
    
}
