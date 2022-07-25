#include <stdio.h>
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
	char *str = (char) malloc(sizeof(char));
	if(str == NULL)
	{
		return (NULL);
	}
	else
	{
		str[0] = c;
	}
}

