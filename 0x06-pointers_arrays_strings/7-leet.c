#include "main.h"

/**
*leet - encodes a string into 1337.
*@c: parameter
*Return: string
*/
char *leet(char *c)
{
int i = 0, j = 0;
char *s = "aelotAELOT";
char *t = "4310743107";
while (c[i] != '\0')
{
while (j < 10)
{
if (c[i] == s[j])
{
*(c + i) = *(t + j);
}
j++;
}
i++;
}
*(c + i) = '\0';
return (c);
}
