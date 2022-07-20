#include "main.h"
/**
*_puts_recursion - prints a string, followed by a new line
*@s: parameter
*/
void _puts_recursion(char *s)
{
if (s == 0)
{
_putchar(10);
_putchar(10);
}
_putchar(*s);
s++;
if (*s != '\0')
{
_puts_recursion(s);
}
if (*(s + 1) == '\0' && *s != '\0')
{
_putchar(10);
}
}
