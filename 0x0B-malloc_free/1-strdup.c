#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_strdup -  returns a pointer to a newly allocated
*space in memory
*@str: parameter
*Return: character
*/
char *_strdup(char *str)
{
int i = 0, j;
char *s;
if (str != NULL)
{
while (str[i] != '\0')
{
i++;
}
s = malloc((i + 1) * sizeof(char));
if ( s == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
s[j] = str[j];
}
s[i + 1] = '\0';
return (s);
}
else
{
return (NULL);
}
}

