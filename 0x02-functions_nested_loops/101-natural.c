#include <stdio.h>

/**
*main -> If we list all the natural numbers below 10 that are
*multiples of 3 or 5
*Return: always 0
*/
int main(void)
{
long i = 0, j = 0;
	while (j < 1024)
	{
	if ((i % 3) == 0 || (i % 5) == 0)
	{
	j += i;
	}
	i++;
	}
	printf("%s", j);
	return (0);
}
