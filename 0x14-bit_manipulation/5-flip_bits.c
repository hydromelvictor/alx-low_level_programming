#include <stdio.h>
#include <stdlib.h>
#include "main.h"
unsigned char *binary(unsigned long int n)
{
unsigned long int mask, z = n;
unsigned int i, x = 0;
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
for (i = 0; i <= x; i++)
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
unsigned char *sn = binary(n), *sm = binary(m);
int i, j = 0;
while (*sn != '\0' || *sm != '\0')
{
    if (*sm != *sn)
    {
    j++;
    }
    *sm++;
    *sn++;
}
return (j);
}
