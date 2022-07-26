#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*strtow - splits a string into words
*@str: parameter
*Return: words array strings
*/
char **strtow(char *str)
{
	int j = 0,f = 0, k = 0, s = 0, u = 0;
	char **tab;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[j] != '\0')
		{
			if(str[j] == ' ')
			{
				j++;
			}
		}
		tab = malloc((j + 1) * sizeof(char) + 1);
		if (tab == NULL)
		{
			return (NULL);
		}
		for (f = 0; f <= j; j++)
		{
			u = s;
			while (str[s] != ' ')
                	{       
                        	s++;
                	}
			tab[f] = malloc(s * sizeof(char));
			if (tab[f] == NULL)
			{
				return (NULL);
			}
			for (k = 0; k <= s; k++)
			{
				tab[f][k] = str[u + k];
			}
			tab[f][k +1] = '\0';
			s++;
		}
		tab[f + 1][1] = '\0';
		return (tab);
	}
}

