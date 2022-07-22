#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes
*@s: parameter
*@accept: parameter
*Return: character
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0, k = 0;
while (accept[i] != '\0')
{
i++;
}
while (s[j] != '\0')
{
k = 0;
while (k <= i)
{
if (s[j] == accept[k])
{
return (s + j);
}
k++;
}
j++;
}
return (s + j);
}
