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
int i = 0, k = 0;
while (dest[i] != '\0')
{
i++;
}
for (k = 0; k < n; k++)
{
*(dest + i + k) = *(src + k);
}
return (dest);
}
