#include "main.h"
/**
*_strchr - locates a character in a string
*@s: parameter
*@c: parameter
*Return: character
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
break;
}
i++;
}
if (s[i + 1] != '\0')
{
*(s + i) = '\0';
}
return (s + i);
}
