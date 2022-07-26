#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*str_concat - concatenates two strings
*@s1: parameter
*@s2: parameter
*Return: character
*/
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, s = 0;
char *str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
str = malloc((i + j) * sizeof(char) + 1);
if (str == NULL)
{
return (NULL);
}
while (k < (i + j))
{
if (k < i)
{
str[k] = s1[k];
}
if (k >= i)
{
str[k] = s2[s];
s++;
}
k++;
}
str[k] = '\0';
return (str);
}

