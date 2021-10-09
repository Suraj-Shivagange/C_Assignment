#include<stdio.h>

#include"Prg_5.h"



int remove_duplicate_elements(int A[], int size)
{
    printf("\n");
    printf("The array after removing duplicates is:");
    int i,j,k;
    
    for(i=0;i<size;i++)
    {
       for(j = i+1; j < size; j++)
       {
          if(A[i] == A[j])
          {
             for(k = j; k <size; k++)
             {
                A[k] = A[k+1];
             }
             j--;
             size--;
          }
       }
    }
    for(i=0;i<size;i++)
       printf(" %d ",A[i]);

    
    printf("\n");
return 0;
}
    
