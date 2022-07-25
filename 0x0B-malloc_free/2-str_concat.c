#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*str_concat - concatenates two strings
*@s1: parameter
*s2: parameter
*Return: character
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;
	char *str;
	while (s1 != NULL && s1[i] != '\0')
	{
		i++;
	}
	while (s2 != NULL && s2[j] != '\0')
	{
		j++;
	}
	str = malloc((i + j + 1) * sizeof(int));
	if ((i == 0 && j == 0) || str == NULL)
	{
		return (NULL);
	}
	else if (s2 == NULL && s1 != NULL)
	{
		for (k = 0; k <= i; k++)
		{
			str[k] = s1[k];
		}
		str[i + 1] = '\0';
		return (str);
	}
	else if (i == 0 && j != 0)
	{
		for (k = 0; k <= j; k++)
                {
                        str[k] = s2[k];
                }
                str[j + 1] = '\0';
                return (str);
	}
	else
	{
		for (k = 0; k <= i; k++)
		{
			str[k] = s1[k];
		}
		for(;k <= i + j; k++)
		{
			str[k + 1] = s2[k - i];
		}
		str[k + 1] = '\0';
		return (str);
	}
}
