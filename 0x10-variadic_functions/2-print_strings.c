#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - strings print
 * @separator: parameter
 * @n: parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *str = malloc(sizeof(char));
if (str == NULL)
{
return;
}
va_start(list, n);
if (separator == NULL)
{
return;
}
for (i = 0; i < (n - 1); i++)
{
str = va_arg(list, char *);
if (str == NULL)
{
str = "nil";
}
printf("%s%s", str, separator);
}
if (str == NULL)
{
str = "nil";
}
printf("%s\n", va_arg(list, char *));
}
