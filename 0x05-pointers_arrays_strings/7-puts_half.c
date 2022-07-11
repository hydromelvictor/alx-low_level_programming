#include "main.h"

/**
*puts_half - prints half of a string
*@str: parameter
*/
void puts_half(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
i = i - 1;
int n = (i % 2 == 0) ? i / 2 : (i - 1) / 2;
while (i >= n)
{
_putchar(str[i]);
}
_putchar(10);
}