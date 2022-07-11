#include "main.h"

/**
*_strlen - returns the length of a string
*@s: parameter
*Return: integer
*/
int _strlen(char *s)
{
int i = 0;
char n;
while (n != '\0')
{
n =  *(s + i);
i++;
}
return (i - 1);
}