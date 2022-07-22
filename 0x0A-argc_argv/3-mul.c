#include "main.h"
/**
*_print - nummbre prints
*@n: parameter
*Return: always 0
*/
int _print(int n)
{
	int m = n, i;
	while (n >= 10)
	{
		i = 0;
		while (m >= 10)
		{
			m = m / 10;
			i++;
		}
		_putchar(m);
		while (i > 0)
		{
			m = m * 10;
			i--;
		}
		n = n - m;
	}
	_putchar(n);
	return (0);
}
/**
*main - multiplies
*@argc: parameter
*@argv: parameter
*Return: always 0
*/
int main(int argc, int *argv[])
{
	if (argc < 3 )
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		return (1);
	}
	else
	{
		int n = argv[1] * argv[2];
		if (n < 0)
		{
			n = - n;
			_putchar('-');
		}
		_print(n);
	}
}

