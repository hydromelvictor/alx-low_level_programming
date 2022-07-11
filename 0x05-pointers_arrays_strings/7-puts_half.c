#include "main.h"

/**
*puts_half - prints half of a string
*@str: parameter
*/
void puts_half(char *str)
{
int i = 0, n = 0;
while (str[i] != '\0')
{
i++;
}
i = i - 1;
if (i % 2 == 0)
{
n = i / 2;
}
else
{
n = (i - 1) / 2;
}
while (i >= n)
{
_putchar(str[i]);
}
_putchar(10);
}
