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
	int i = 0, j = 0, k = 0;
	char *str;
	if(s1 != NULL && s2 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
		}
		while (s2[j] != '\0')
		{
			j++;
		}
		str = malloc((i + j + 1) * sizeof(char));
		for (k = 0; k <= i; k++)
		{
			str[k] = s1[k];
		}
		for (l = 0; l <= j; l++)
		{
			str[k + l +1] = s2[l];
		}
		str[k + l + 2] = '\0';
		return (str);
	}
	else if (s1 == NULL)
	{
		while (s2[j] != '\0')
                {
                        j++;
                }
		str = malloc((j + 1) * sizeof(char));
                for (k = 0; k <= j; k++)
                {
                        str[k] = s2[k];
                }
		return (str + '\0');
	}
	else if (s2 == NULL)
	{
		while (s1[j] != '\0')
                {
                        i++;
                }
                str = malloc((i + 1) * sizeof(char));
                for (k = 0; k <= i; k++)
                {
                        str[k] = s1[k];
                }
                return (str + '\0');
	}
	else
	{
		return (NULL);
	}
}

