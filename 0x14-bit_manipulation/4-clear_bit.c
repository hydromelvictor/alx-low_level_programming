#include <stdio.h>
#include "main.h"
/**
 * clear_bit - clear bit
 *
 * @n: parameter
 * @index: parameter
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (n != NULL)
{
*n = ((*n) & ~(1 << index));
return (1);
}
return (-1);
}
