#include <stdio.h>
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

if (n != NULL)
{
*n = ((*n) | (1 << index));
return (1);
}
return (-1);
}
