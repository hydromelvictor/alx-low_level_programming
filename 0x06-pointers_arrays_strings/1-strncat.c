#include "main.h"

/**
*_strncat - Write a function that concatenates two strings
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: string always
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0, k;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
if (n >= j)
{
for (k = 0; k < n; k++)
{
*(dest + i + k) = *(src + k);
}
}
else
{
for (k = 0; k < j; k++)
{
*(dest + i + k) = *(src + k);
}
}
return (dest);
}
