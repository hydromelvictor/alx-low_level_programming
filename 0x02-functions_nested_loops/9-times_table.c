#include "main.h"

/***
*times_table -> Write a function that prints the 9 times table
*/
void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int k = i * j;
if (k < 10)
{
if (j != 0)
	_putchar(32);
_putchar(k + '0');
if (j != 9)
{
_putchar(',');
_putchar(32);
}
}
else
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
if (j != 9)
{
_putchar(',');
_putchar(32);
}
}
}
_putchar(10);
}
}
