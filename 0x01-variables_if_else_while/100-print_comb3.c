#include <stdio.h>

/**
*main -> Write a program that prints all possible different combinations
*of two digits
*Return: always 0
*/
int main(void)
{
int i, j;
	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

