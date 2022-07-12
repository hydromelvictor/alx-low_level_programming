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
*dest = src[i];
while (i != '\0')
{
i++;
dest[i] = src[i];
}
return (dest);
}
