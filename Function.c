/* In general it's good to include also the header of the current .c,
   to avoid repeating the prototypes */
//#include "Function.h"
//#ifndef FUNCTIONS_H_INCLUDED
//#define FUNCTIONS_H_INCLUDED
// ^^ these are the include guard
#include<stdio.h>
float Sum(float a, float b)
{

    printf("TEST: %f %f\n", a, b);
    float s = a+b;

    printf("SUM: %f\n", s);
    return s;
}

//#endif