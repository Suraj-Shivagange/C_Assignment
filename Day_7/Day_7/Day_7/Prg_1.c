
#include "Prg_1.h"

#include <stdio.h>
#include <stdlib.h>


int array(int *ptr)
{
    printf("\n");

    int n, i,  sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // dynamic memory allocation using malloc()
    ptr = (int *) malloc(n*sizeof(int));

    if(ptr == NULL) // if empty array
    {
        printf("\nError! Memory not allocated");
        return 0;   // end of program
    }

    printf("Enter elements of array:");
    for(i = 0; i < n; i++)
    {
        // storing elements at contiguous memory locations
        scanf("%d", ptr+i);
        sum = sum + *(ptr + i);
    }

    // printing the array elements using pointer to the location
    printf("The elements of the array are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ",ptr[i]);    // ptr[i] is same as *(ptr + i)
    }

    /*
        freeing memory of ptr allocated by malloc
        using the free() method
    */
    free(ptr);

    printf("\n");
    return 0;
}
