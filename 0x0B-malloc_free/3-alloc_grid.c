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
	int *tab[height], i, j;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{

		for ( i = 0; i < height; i++)
		{
			tab[i] = malloc(width * sizeof(int));
			if ( tab[i] == NULL)
			{
				return (NULL);
			}
		}
		for (i = 0; i <=height; i++)
		{
			for (j = 0; j < width; j++)
			{
				tab[i][j] = 0;
			}
		}
		return (tab);
	}
}
