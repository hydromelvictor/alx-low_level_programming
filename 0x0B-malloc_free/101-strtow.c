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
	int i = 0, j = 0,f = 0, k = 0;
	char **tab;
	if (str == NULL || &str == "")
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
			if(str[i] == " ")
			{
				f++;
			}
		}
		tab = malloc((f + 1) * sizeof(*tab));
		if (tab == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < f; j++)
		{
			u = k;
			while (str[s] != " ")
                	{       
                        	s++;
                	}
			tab[j] = malloc((s + 1) * sizeof(**tab));
			if (tab[j] == NULL)
			{
				return (NULL);
			}
			for (k = u; k < s; k++)
			{
				tab[j][k] = str[k];
			}
			tab[j][k +1] = '\0';
		}
		tab[j + 1][1] = '\0';
		return (tab);
	}
}

