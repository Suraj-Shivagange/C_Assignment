#include "Prg_12.h"

#include <stdio.h>
#include <string.h>

char rev(char *sente[])
{
   printf("\n");
    
    // declare variable
    int i, len, temp;
    len = strlen(sente); // use strlen() to get the length of str string
      
    // use for loop to iterate the string
    for (i = 0; i < len/2; i++)
    {
        // temp variable use to temporary hold the string
        temp = sente[i];
        sente[i] = sente[len - i - 1];
        sente[len - i - 1] = temp;
    }
    
    printf("%c",sente);
    printf("\n");
    
   return 0;

}
