
#include "Prg_6.h"

#include <stdio.h>

int search(int A[], int size, int x)
{
    int i;
    for (i = 0; i < size; i++)
        if (A[i] == x)
            return x;
    return 1;
}
