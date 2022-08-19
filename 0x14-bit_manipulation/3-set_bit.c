#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - Set the bit object
 *
 * @n: parameter
 * @index: parameter
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int z = n, x = 0;
if (n != NULL)
{
while (z > 1)
{
z >>= 1;
x++;
}
if (index <= x)
{
*n |= (1 << index);
}
return (1);
}
return (-1);
}
