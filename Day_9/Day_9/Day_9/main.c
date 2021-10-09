

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Prg_1.h"

int main()
{
    FILE *fp;

    fp = fopen("check.txt",READ_TEXT_MODE);
    display(fp);

    return 0;
}
