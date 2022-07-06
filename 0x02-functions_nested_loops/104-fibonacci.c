#include <stdio.h>
#include "main.h"

/**
*main -> Write a program that finds and prints the first 98 Fibonacci
*numbers
*Return: always 0
*/
int main(void)
{
for (i = 1; i <= 98; i++)
{
printf("%d,	", fibonacci(i));
}
printf("\n");
return (0);
}
