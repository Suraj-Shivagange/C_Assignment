
#include"Prg_1.h"

#include<string.h>
#include <stdio.h>

char upper_case(char str[])
{
    
    printf("\n");

    int i;
    printf(" %s in upper case is : ",str);
    for(i=0;str[i];i++)
    {
        if(str[i]>96 && str[i]<123)
            str[i]-=32;
    }
    printf("%s",str);
    
    printf("\n");
    return str;
    
}
