#include <stdio.h>
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

/**
*main -> Write a program that finds and prints the first 98 Fibonacci
*numbers
*Return: always 0
*/
int main(void)
{
int i;
for (i = 1; i <= 98; i++)
{
printf("%d,	", fibonacci(i));
}
printf("\n");
return (0);
}
