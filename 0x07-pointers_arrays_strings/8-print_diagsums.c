#include "main.h"
#include <stdio.h>
/**
*print_diagsums -  sum of the two diagonals of a square
*matrix of integers.
*@a: parameter
*@size: parameter
*/
void print_chessboard(char (*a)[8])
{
int i = 0, j = 0, k = 0;
while (**(a + i) != '\0')
{
k++;
}
while (**(a + i) != '\0')
{
if(i != 0 && i != k)
{
_putchar('\n');
}
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
i++;
}
}
