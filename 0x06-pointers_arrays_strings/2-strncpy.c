#include "main.h"
/**
*len - length of array
*@c: parameter
*Return: integer
*/
int len(char *c)
{
int i = 0;
while (c[i] != '\0')
{
i++;
}
return (i);
}

/**
*_strncpy - Write a function that copies a string
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
int k, i = len(dest), j = len(src);
if (i > n)
{
if (j < n)
{
for (k = 0; k <= j; k++)
{
*(dest + k) = *(src + k);
}
for (; k < n; k++)
*(dest + k + 1) = '\0';
}
else
{
for (k = 0; k < n; k++)
*(dest + k) = *(src + k);
}
}
else
{
if (j <= i)
{
for (k = 0; k <= j; k++)
{
*(dest + k) = *(src + k);
}
for (; k < i; k++)
*(dest + k + 1) = '\0';
}
else
{
for (k = 0; k <= i; k++)
*(dest + k) = *(src + k);
}
}
return (dest);
}
