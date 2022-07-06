#include <stdio.h>
#include "main.h"

/**
*main -> Write a program that prints the first 50 Fibonacci numbers
*Return: always 0
*/
int main(void)
{
int i;
for (i = 1; i <= 50; i++)
{
printf("%d,	", fibonacci(i));
}
printf("\n");
return (0);
}
