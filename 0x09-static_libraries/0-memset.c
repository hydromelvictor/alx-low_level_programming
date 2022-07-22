#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: parameter
*@b: parameter
*@n: parameter
*Return: character
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0, j = 0;
while (s[i] != '\0')
{
i++;
}
if (i >= n)
{
while (j < n)
{
s[j] = b;
j++;
}
}
else
{
while (j <= i)
{
s[j] = b;
j++;
}
}
return (s);
}
