#include <stdio.h>

/**
*main -> If we list all the natural numbers below 10 that are
*multiples of 3 or 5
*Return: always 0
*/
int main(void)
{
int i = 0, res = 0;
	while (res < 1024)
	{
	if (((i % 3) == 0 || (i % 5) == 0) && res < 1024)
	{
	if (res + i < 1024)
	{
	res += i;
	}
	else
	{
	break;
	}
	}
	i++;
	}
	printf("%d", res);
	return (0);
}
