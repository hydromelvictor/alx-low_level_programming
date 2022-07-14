#include "main.h"

/**
*leet - encodes a string into 1337.
*@c: parameter
*Return: string
*/
char *leet(char *c)
{
int i = 0, j = 5, k;
char s[5] = "AELOT";
char t[5] = "43107";
while (c[i] != '\0')
{
k = 0;
while (k < j)
{
if (c[i] == s[k] || c[i] - 32 == s[k])
{
c[i] = t[k];
}
k++;
}
i++;
}
*(c + i) = '\0';
return (c);
}
