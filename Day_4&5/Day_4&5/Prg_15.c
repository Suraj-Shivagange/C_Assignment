
#include "Prg_15.h"

#include <stdio.h>

int sparse(int m3[2][2])
{
    printf("\n");
    printf("\n");
   
    int row_size,col_size;
    //Get size of matrix
    printf("Enter the row Size Of the Matrix:");
    scanf("%d",&row_size);
    printf("\n");
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d",&col_size);

    int matrix[row_size][col_size];
    printf("\n");

    //Taking input of the matrix
    int i,j;
    
    int count_zero=0;
     //Count number of zeros present in the given Matrix
     for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            if(m3[i][j]==0)
            {
              count_zero++;
            }
        }
    }
    printf("\n");
    //check if zeros present in the given Matrix>(row*column)/2
    if(count_zero>(row_size*col_size)/2)
        printf("Given Matrix is a Sparse Matrix.");
    else
        printf("Given Matrix is not a Sparse Matrix.");
    
    
    printf("\n");
return 0;
}
