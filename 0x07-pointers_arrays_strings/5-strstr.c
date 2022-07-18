#include "main.h"
/**
*_strstr - locates a substring
*@haystack: parameter
*@needle: parameter
*Return: character
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, k = 0, p = 0;
while (needle[i] != '\0')
{
i++;
}
while (haystack[j] != '\0')
{
k = 0;
if (haystack[j] == needle[k])
{
p = 0;
while (k <= i)
{
if (haystack [j + k] == needle[k])
{
p++;
}
else
{
break;
}
k++;
}
}
if (p == i)
{
return (haystack + j);
}
j++;
}
return (haystack + j);
}
