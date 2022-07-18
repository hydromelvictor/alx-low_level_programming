#include "main.h"
/**
*_strchr - locates a character in a string
*@s: parameter
*@c: parameter
*Return: character
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0, j = 0;
while(s[j] != '\0')
{
j++;
}
while (s[i] != '\0')
{
if (s[i] == c)
{
break;
}
i++;
}
if (j == i)
{
i++;
*(s + i ) = *(s + i) + '\0'; 
}
return (s + i);
}
