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
	int i = 0, j = 0, k = 0, s = 0;
	char *str;
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
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

/*
	if (s2 == NULL && s1 != NULL)
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
		for (f = 0;f <= j; f++)
		{
			str[k + f + 1] = s2[f];
		}
		f = k + f + 1;
		str[f + 1] = '\0';
		return (str);
	}
}
*/
