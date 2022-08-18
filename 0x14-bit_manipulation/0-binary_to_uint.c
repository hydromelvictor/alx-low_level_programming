#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: parameter
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int len = 0, i = 0, base10 = 0;
if (b != NULL)
{
while (b[len] != '\0')
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
len++;
}
while (b[i] != '\0')
{
base10 += (b[i] - '0') << (len - i - 1);
i++;
}
return (base10);
}
return (0);
}
