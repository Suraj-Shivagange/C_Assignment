
#include "Prg_3.h"

#include <stdio.h>
#include <string.h>

int set_union(int A[],int B[], int size)
{
    printf("\n");
    
    int i, j,  k = 0 , count = 0;
    int c[50];
    printf("The Union set of A and B is :");
    for(i=0;i<size;i++)
     {
      c[k]=A[i];
      k++;
     }
     for(i=0;i<size;i++)
     {
      count=0;
      for(j=0;j<size;j++)
      {
       if(B[i]==c[j])
       {
        count=1;
        break;
       }
      }
      if(count==0)
      {
       c[k]=B[i];
       k++;
      }
     }
    for(i=0;i<k;i++)
     {
      printf(" %d ",c[i]);
     }

    printf("\n");
    return 0;
    
}



int set_intersection(int A[], int B[],int size)
{
    printf("\n");
    
    int i,j;
    printf("The intersection set of A and B :");
    for(i=0;i<=size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(A[i] == B[j])
                printf(" %d ",A[i]);
            
        }
        
    }
    printf("\n \n");
    return 0;
}


int set_difference(int A[], int B[], size)
{
    printf("\n");
    
    int i,j,k=0;
    int c[50];  // use this array to store the value of a initially
    int d[50];  // use this array to store the value after substracting the
                // same elements of a and b and storying in d[]
    for(i=0;i<size;i++)
    {
        c[k] = A[i];
        k++;
    }
    
    printf("\n");
    printf("The (A -B) set of A and B :");
    for(i=0;i<=size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(A[i] == B[j])
                printf(" %d ",A[i]);
            
        }
        
    }
    
    for(i=0;i<size;i++)
    {
        for (k=0; k<size; k++)
        {
            if( c[k] != A[i])
                printf(" %d ",A[i]);
        }
       
    }
    
    
        
    printf("\n \n");
    return 0;
}



