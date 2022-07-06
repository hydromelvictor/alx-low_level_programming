#include "main.h"

/**
*fibonacci -> fibonacci number genereted
*@n: parameter
*Return: fibonacci number
*/
int fibonacci(int n)
{
if (n == 0 || n == 1)
	return (1);
if (n == 2)
	return (2);
return (fibonacci(n - 1) + fibonacci(n - 2));
}
