
#include "Prg_4.h"
#include <stdio.h>



int number_pali(int n)
{
    int  rev = 0, remainder;
        printf("Enter an number: ");
        scanf("%d", &n);
        while (n != 0)
        {
            remainder = n % 10;
            rev = rev * 10 + remainder;
            n /= 10;
          
        }
    printf("the reversed number is: %d \n",rev);
   if(n == rev)
       return 1;
   else
       return rev;
}
