#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
unsigned long int mask, z = n;
unsigned int i, x = 0;
while (z > 1)
{
z >>= 1;
x++;
}
mask = 1 << x;
for (i = 0; i <= x; i++)
{
_putchar(n & mask ? '1' : '0');
n <<= 1;
}
}
