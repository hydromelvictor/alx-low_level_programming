#include "main.h"
#include <stdio.h>

/**
*print_array - prints n elements of an array of
*integers
*@a: parameter
*@n: parameter
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%p, ", (a + i));
}
printf("\n");
}