#include "main.h"

/**
*leet - encodes a string into 1337.
*@c: parameter
*Return: string
*/
char *leet(char *c)
{
int i = 0, j = 0;
while (c[i] != '\0')
{
if (c[i] == 'a' || c[i] == 'A')
{
*(c + i) = '4';
}
if (c[i] == 'e' || c[i] == 'E')
{
*(c + i) = '3';
}
if (c[i] == 'o' || c[i] == 'O')
{
*(c + i) = '0';
}
if (c[i] == 't' || c[i] == 'T')
{
*(c + i) = '7';
}
if (c[i] == 'l' || c[i] == 'L')
{
*(c + i) = '1';
}
i++;
}
return (c);
}
