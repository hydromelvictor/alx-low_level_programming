#include <stdio.h>
#include "main.h"

/**
*fibonacci -> fibonacci number genereted
*@n: parameter
*Return: fibonacci number
*/
long fibonacci(long n)
{
if (n == 0 || n == 1)
	return (1);
if (n == 2)
	return (2);
return (fibonacci(n - 1) + fibonacci(n - 2));
}

/**
*main -> Write a program that prints the first 50 Fibonacci numbers
*Return: always 0
*/
int main(void)
{
long i;
for (i = 1; i <= 50; i++)
{
printf("%ld,	", fibonacci(i));
}
printf("\n");
return (0);
}
