#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - Get the bit object
 * 
 * @n: parameter
 * @index: parameter
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int mask, i, z = n, x = 0;
int *s = malloc(sizeof(int));
if (s == NULL)
{
return (-1);
}
while (z > 1)
{
z >>= 1;
x++;
}
mask = 1 << x;
if (index <= x)
{
for (i = 0; i <= x; ++i)
{
if (i == index)
{
return (n & mask ? 1 : 0);
}
n <<= 1;
}
}
return (-1);
}
