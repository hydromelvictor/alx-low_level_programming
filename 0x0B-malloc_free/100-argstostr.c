#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*argstostr - concatenates all the arguments
*@ac: parameter
*@av: parameter
*/
char *argstostr(int ac, char **av)
{
	char **str;
	unsigned int j;
	int i;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		str = malloc(ac * sizeof(*str));
		if (str == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < ac; i++)
		{
			str[i] = malloc((strlen(av[i]) + 1) * sizeof(**str));
			if (str[i] == NULL)
			{
				return (NULL);
			}
			for (j = 0; j < strlen(av[i]); j++)
			{
				str[i][j] = av[i][j];
			}
			str[i][strlen(av[i])] = '\n';
		}
		return (*str);
	}
}
