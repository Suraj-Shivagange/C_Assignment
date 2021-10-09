
#include "Prg_5.h"

#include <stdio.h>

int prime_number( int n )
{
    int i,j; int flag = 0;
    printf("Enter till where you want prime numbers : ");
    scanf("%d",&n);
    
    for (i=2; i<=n; i++)
        {

            for (j=2; j<=i; j++)
                {
                    if(i%j == 0)
                    break;
                    else
                {
                    printf(" %d \n", i);
                    break;
                }
                }
        }
    return 0;
}
