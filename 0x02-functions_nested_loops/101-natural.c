#include <stdio.h>

/**
*main -> If we list all the natural numbers below 10 that are
*multiples of 3 or 5
*Return: always 0
*/
int main(void)
{
int i = 0, j = 0, res = 0, r = 0;
	while (res < 1024)
	{
	r = res;
	if (((i % 3) == 0 || (i % 5) == 0) && res < 1024)
	{
	res += i;
	}
	i++;
	}
	if (res > 1024)
	{
	res = r;
	}
	printf("%d", res);
	return (0);
}
