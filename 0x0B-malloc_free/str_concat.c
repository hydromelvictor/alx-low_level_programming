#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*str_concat - concatenates two strings
*@s1: parameter
*@s2: parameter
*Retrun: charater
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	char *str;
	if (s1 == NULL && s2 == NULL)
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
	str = malloc((i + j + 1) * sizeof(char));
	if (str == NULL) 
	{
		return (NULL);
	}
	if (i == 0)
	{
		for (k = 0; k <= j; k++)
		{
			str[k] = s2[k];
		}
		str[k + 1] = '\0';
		return (str);
	}
	else if (j == 0)
	{
		for (k = 0; k <= i; k++)
                {
                        str[k] = s1[k];
                }
                str[k + 1] = '\0';
                return (str);
	}
	else
	{
		for (k = 0; k <= i; k++)
                {
                        str[k] = s1[k];
                }
		for (; k <= j; k++)
                {
                        str[k] = s2[k];
                }
                str[k + 1] = '\0';
                return (str);
	}
}

