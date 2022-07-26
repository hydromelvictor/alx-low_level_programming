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
	int i = 0;
	unsigned int k = 0;
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
		while (i < ac)
		{
			str[i] = malloc((strlen(av[i]) + 1) * sizeof(**str));
			if (str[i] == NULL)
			{
				return (NULL);
			}
			k = 0;
			while (k < strlen(av[i]))
			{
				str[i][k] = av[i][k];
				k++;
			}
			str[i][k] = '\n';
			i++;
		}
		return (*str);
	}
}

