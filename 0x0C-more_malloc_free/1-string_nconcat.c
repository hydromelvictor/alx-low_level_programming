#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - concatenates two strings.
 * @s1: parameter
 *@s2: parameter
 *@n: parameter
 *Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, k = 0, p, s;
char *str = malloc(sizeof(char));
if (str == NULL || (s1 == NULL && s2 == NULL))
{
return (NULL);
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
p = (n >= j) ? i + j : i + n;
if (p >= i)
{
while (k <= i)
{
str[k] = s1[k];
k++;
}
}
if (p >= i + j || p >= i + n)
{
s = 0;
while (k < i + j)
{
str[k] = s2[s];
k++;
s++;
}
}
str[k] = '\0';
return (str);
}