#include "main.h"
/**
*_strspn -  gets the length of a prefix substring
*@s: parameter
*@accept: parameter
*Return: unsigned integer
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, k = 0, j = 0, p = 0, z = 0;
unsigned int m = _putchar(32);
while (accept[j] != '\0')
{
j++;
}
while (s[i] != '\0')
{
while (p <= j || s[i] == m)
{
if (s[i] == accept[j])
{
z++;
}
p++;
}
if (z == (i - k))
{
return (z);
}
if (s[i] == m)
{
k = i + 1;
}
i++;
}
return (0);
}
