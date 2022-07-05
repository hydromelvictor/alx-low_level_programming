#include "main.h"

/**
*print_last_digit -> Write a function that prints the last digit of a number
*@n: parameter
*Return: n%10
*/
int print_last_digit(int n)
{
int m;
	if (n < 0)
		n = -n;
	m = n % 10;
	_putchar(m);
	return (n % 10);
}
