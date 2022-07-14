#include "main.h"

/**
*sign - unsigned
*@n: parameter
*Return: positif n
*/
int sign(int n)
{
if (n < 0)
{
_putchar(45);
n = -n;
}
return (n);
}

/**
*print_number - prints an integer
*@n: parameter
*/
void print_number(int n)
{
n = sign(n);
int i = 0, p, m = n;
while (m >= 10)
{
m = m / 10;
i++;
}
p = i;
_putchar(m + '0');
while (p > 0)
{
int s = i;
while (i > 0)
{
m = m * 10;
i--;
}
n = n - m, m = n;
i = 0;
while (m >= 10)
{
m = m / 10;
i++;
}
if (i < (s - 1))
{
int d = s - i;
while (d > 1)
{
_putchar(0 + '0');
d--;
}
}
_putchar(m + '0');
p--;
if (i == 0)
return;
}
}

