#include "main.h"

/**
*_strcpy - copies the string pointed to by src
*@dest: parameter
*@src: parameter
*Return: string
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
char n = src[0];
while (i != '\0')
{
n += src[i];
i++;
}
*dest = n;
return (dest);
}
