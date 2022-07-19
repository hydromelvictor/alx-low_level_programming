#include "main.h"
#include <stdio.h>
/**
*print_diagsums -  sum of the two diagonals of a square
*matrix of integers.
*@a: parameter
*@size: parameter
*/
void print_diagsums(int *a, int size)
{
int i = 0, j = 0, k = 0;
while (i < size)
{
j = j + *(a + i * size + i);
k = k + *(a + i * size + size - i - 1);
i++;
}
printf("%i, %i\n", j, k);
}
