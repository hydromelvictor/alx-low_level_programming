#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*alloc_grid - returns a pointer to a 2 dimensional
*array of integers
*@width: parameter
*@height: parameter
*Return: grid integer
*/
int **alloc_grid(int width, int height)
{
	int **tab, i, j;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		tab = malloc(width * sizeof(*tab));
		if( tab == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			tab[i] = malloc(height * sizeof(*(tab[i])));
			if(tab[i] == NULL)
			{
				return (NULL);
			}
		}
		for (i = 0; i <=width; i++)
		{
			for (j = 0; j < height; j++)
			{
				tab[i][j] = 0;
			}
		}
		return (tab);
	}
}
