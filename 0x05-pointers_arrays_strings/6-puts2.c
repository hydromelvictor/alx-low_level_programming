#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: parameter
*/
void puts2(char *str)
{
int i = 0, j = 0;
while (str[i] != '\0')
{
i++;
}

while (j < i - 1)
{
_putchar(str[j]);
j *= 2;
}
_putchar(10);
}
