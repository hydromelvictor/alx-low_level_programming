#include "main.h"

/**
*print_sign -> Write a function that prints the sign of a number.
*Return: -1 or 0 or 1
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar(43);
	return (1);
}
if (n < 0)
{
	_putchar(45);
	return (-1);
}
return (0);
}
