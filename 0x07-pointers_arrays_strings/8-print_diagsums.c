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
int i, j, k, trace = 0, inv = 0;
int **b = &a;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
trace += b[i][j];
}
inv += b[i][(size - 1) - i];
}
}
printf("%d, %d", trace, inv);
}
