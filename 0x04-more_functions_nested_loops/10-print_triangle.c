#include "main.h"

/**
*print_triangle - Write a function that prints a triangle
*followed by a new line.
*@size: parameter
*/
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar(10);
}
else
{
for (i = 0; i < size; i++)
{
for (j = size -1; j > i; j--)
{
_putchar(32);
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar(10);
}
}
}