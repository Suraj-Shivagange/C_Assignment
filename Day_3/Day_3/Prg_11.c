#include "Prg_11.h"

#include <stdio.h>
#include <math.h>

double sqr(double n)
{
    double value;
    value = sqrt(n);
    return value ;
}

double natural_log(double x)
{
    double value;
    value = log(x);
    return value;
}

double log_10(double x)
{
    double value;
    value = log10(x);
    return value;
}

double power_(double n,double x)
{
    double value;
    value = pow(n,x);
    return value;
}

double cos_(double x)
{
    double value;
    value = cos(x);
    return value;
}
