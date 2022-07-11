#include "main.h"
#include <stdlib.h>

/**
*swap_int - swaps the values of two integers
*@a: parameter
*@b: parameter
*/
void swap_int(int *a, int *b)
{
int *p = 0;
*p = *a;
*a = *b;
*b = *p;
}