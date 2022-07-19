#include "main.h"
/**
*_strspn -  gets the length of a prefix substring
*@s: parameter
*@accept: parameter
*Return: unsigned integer
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j = 0, k = 0;
char *a = s, *b = accept;
while (a[i] != '\0')
{
j = 0;
while (b[j] != '\0')
{
if (b[j] == a[i])
{
k++;
break;
}
j++;
}
if (s[i] != accept[j])
{
break;
}
i++;
}
return (k);
}
