#include "main.h"
#include <stdio.h>

/**
*left_digit - left digit of number
*@n: parameter
*Return: digit left
*/
int left_digit(int n)
{
return (n / 10);
}

/**
*print_number - print number
*@n: parameter
*/
void print_number(int n)
{
int a;
int i = 0;
if (n < 0)
{
n = -n;
_putchar('-');
}
if (n >= 10)
{
while (n >= 10)
{
a = n;
while (a >= 10)
{
a = left_digit(a);
i++;
}
_putchar(a + '0');
while (i > 0)
{
a = a * 10;
i--;
}
n = n - a;
}
_putchar(n + '0');
}
else
{
if (n < 10)
{
_putchar(n + '0');
}
else
{
_putchar(n + '0');
}
}
}
