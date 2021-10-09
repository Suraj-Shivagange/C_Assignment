#include "Prg_13.h"

#include <stdio.h>


int mat_5(int mat[5][5])
{
    
    int i,j;
  
       printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
       printf("------------------------------------------------------\n");
  
 
    /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<5;i++)
  {
      for(j=0;j<5;j++)
      {
          printf("element - [%d],[%d] : ",i,j);
          scanf("%d",&mat[i][j]);
      }
  }
 
 printf("\nThe matrix is : \n");
  for(i=0;i<5;i++)
  {
      printf("\n");
      for(j=0;j<5;j++)
           printf("%d\t",mat[i][j]);
  }
 printf("\n\n");

    return 0;
}
