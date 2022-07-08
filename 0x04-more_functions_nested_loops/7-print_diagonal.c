#include "main.h"

/**
*print_diagonal - Write a function that draws a diagonal
*line on the terminal.
*@n: parameter
*/
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
_putchar('\\');
_putchar(10);
}
if(n <= 0)
{
_putchar(10);
}
}