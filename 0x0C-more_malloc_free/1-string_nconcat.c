#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
unsigned int i, j, k = 0, s;
char *str;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
i = strlen(s1);
j = strlen(s2);
str = (n >= j) ? malloc((i + j) *sizeof(char) + 1) :
malloc((i + n) * sizeof(char) + 1);
if (str == NULL)
{
return (NULL);
}
for (k = 0; k <= i; k++)
{
str[k] = s1[k];
}
j = (n >= j) ? j : n;
s = 0;
k = k + 1;
for (s = 0; s <= j; s++)
{
str[k + s] = s2[s];
}
str[k++] = '\0';
return (str);
}
