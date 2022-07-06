#include <stdio.h>

/**
*natural -> If we list all the natural numbers below 10 that are
*multiples of 3 or 5
*/
void natural(void)
{
int i = 0, j = 0;
	while(j <1024)
	{
	if( (i % 3) == 0 || (i % 5) == 0)
	{
	j += i;
	}
	i++;
	}
	printf("%d", j);
}
