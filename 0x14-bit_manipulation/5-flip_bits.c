#include <stdio.h>
#include <stdlib.h>
#include "main.h"
unsigned char *binary(unsigned long int n)
{
unsigned long int mask, i, z = n, x = 0;
unsigned char *s = malloc(sizeof(unsigned char));
if (s == NULL)
{
return (NULL);
}
while (z > 1)
{
z >>= 1;
x++;
}
mask = 1 << x;
for (i = 1; i <= x + 1; ++i)
{
s[i] = (n & mask ? '1' : '0');
n <<= 1;
}
return (s);
}
/**
 * flip_bits - number of bits you would need
 * 
 * @n: paramter
 * @m: parameter
 * Return unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int s = n ^ m;
unsigned int i = 0, j = 0;
unsigned char *d = binary(s);
while (d[i] != '\0')
{
if (d[i] == '1')
{
j++;
}
i++;
}
return (j);
}
