#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main -  adds positive numbers
*@argc: parameter
*@argv: parameter
*Return: integer
*/
int main(int argc, char *argv[])
{
int i, j, p, k = 0;
char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (argc < 1)
	{
		printf("%d\n", 0);
		return (-1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				for (p = 0; p < 52; p++)
				{
					if (argv[i][j] == c[p])
					{
						printf("%s\n", "Error");
						return (1);
					}
					else
					{
						continue;
					}
				}
			}
			k += atoi(argv[i]);
		}
		printf("%d\n", k);
		return (0);
	}
}

