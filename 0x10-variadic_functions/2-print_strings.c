#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * start - print with no separator
 *
 * @list: parameter
 * @n: parameter
 */
void start(va_list list, unsigned int n)
{
unsigned int i;
char *str = malloc(sizeof(char));
for (i = 0; i < (n - 1); i++)
{
str = va_arg(list, char *);
if (str == NULL)
{
printf("%s", "(nil)");
}
else
{
printf("%s", str);
}
}
str = va_arg(list, char *);
if (str == NULL)
{
printf("%s\n", "(nil)");
}
else
{
printf("%s\n", str);
}
va_end(list);
}
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
if (n == 0 || str == NULL)
{
printf("\n");
return;
}
va_start(list, n);
if (separator == NULL)
{
start(list, n);
return;
}
for (i = 0; i < (n - 1); i++)
{
str = va_arg(list, char *);
if (str == NULL)
{
printf("%s%s", "(nil)", separator);
}
else
{
printf("%s%s", str, separator);
}
}
str = va_arg(list, char *);
if (str == NULL)
{
printf("%s\n", "(nil)");
}
else
{
printf("%s\n", str);
}
}
