#include "main.h"
/**
*_puts_recursion - prints a string, followed by a new line
*@s: parameter
*/
void _puts_recursion(char *s)
{
_putchar(*s);
s++;
if (*s != '\0')
{
_puts_recursion(s);
}
_putchar(10);
}
