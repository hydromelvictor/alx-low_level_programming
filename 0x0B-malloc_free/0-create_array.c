#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*create_array - creates an array of chars, and initializes it
*with a specific char
*@size: parameter
@c: parameter
*Return: charater
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	int i = 0;
       	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}

