
#include "Prg_3.h"

#include <stdio.h>

int design(int n)
{
    int i, j, k, l=1;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i=n; i>=1 ; i--)
    {
        for(j=1 ; j<=i-1 ; j++)
        {
            printf(" ");
        }
        for(k=1;k<=l;k++)
              {
                  printf("*");
              }
              printf("\n");
              l++;
        }
    return 0;
}
