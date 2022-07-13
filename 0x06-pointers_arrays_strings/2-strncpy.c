#include "main.h"

/**
*_strncpy - Write a function that copies a string
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
int k = 0, i = 0;
while (dest[i] != '\0')
{
i++;
}
for (k = 0; k < n; k++)
{
*(dest + k) = *(src + k);
}
for ( ; k < i; k++)
{
*(dest + k) = '\0';
}
return (dest);
}
