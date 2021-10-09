#include<stdio.h>
#include"Prg_7.h"




int binarysearch(int C[], int start_index, int end_index, int element)
{
    
   while (start_index <= end_index)
   {
      int middle = start_index + (end_index- start_index )/2;
      
       if (C[middle] == element)
         return middle;
      
       if (C[middle] < element)
         start_index = middle + 1;
       else
         end_index = middle - 1;
       return 0;
   }
   return 1;
}



