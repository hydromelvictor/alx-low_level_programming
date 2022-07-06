#include "main.h"

/**
*print_times_table ->
*@n: parameter
*/
void print_times_table(int n)
{
int i, j;
if (n <= 15 && n > 0)
{
for (i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
	int k  = i * j;
	if(k < 10)
	{
	_putchar(k + '0');
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	_putchar(',');
	_putchar(' ');
	}
}
}
}
}
