#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * @brief 
 * 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
if (separator == NULL)
{
printf("\n");
return;
}
if (n == 0)
{
return;
}
for (i = 0; i < n - 1; i++)
{
_putchar(va_arg(list, unsigned int) + '0');
_putchar(separator[0]);
}
_putchar(va_arg(list, unsigned int) + '0');
_putchar(10);
}
