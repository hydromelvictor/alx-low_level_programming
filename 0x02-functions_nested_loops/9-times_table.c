#include "main.h"

/***
*times_table -> Write a function that prints the 9 times table
*/
void times_table(void)
{
int i, j;
for (i = 0; i < 11; i++)
{
for (j = 0; j < 11; j++)
{
int k = i * j;
if(k < 10)
{
_putchar(k + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
}
}
