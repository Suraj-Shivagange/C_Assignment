

#include<stdio.h>

#include "Prg_1.h"

FILE * open_file(char *file_name, char *mode)
{
    FILE *fp;

    fp = fopen(file_name,mode);

    if(fp == NULL) return NULL;

    return fp;
}


void display(FILE *fp)
{
    char ch;

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);
}

