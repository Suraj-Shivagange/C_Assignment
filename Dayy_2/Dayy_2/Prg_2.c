#include "Prg_2.h"
#include <stdio.h>

int reverse_of_a_number(int n)
{
    int  rev = 0, remainder;
        printf("Enter an integer: ");
        scanf("%d", &n);
        while (n != 0)
        {
            remainder = n % 10;
            rev = rev * 10 + remainder;
            n /= 10;
        }
    printf("Reversed number = %d \n", rev);
    return rev;
}
