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
if (n == 0 || separator == NULL)
{
printf("\n");
return;
}
if (separator == NULL)
{
for (i = 0; i < (n - 1); i++)
{
if (va_arg(list, char *) == NULL)
{
printf("%s", "nil");
}
else
{
printf("%s", va_arg(list, char *));
}
}
if (va_arg(list, char *) == NULL)
{
printf("%s\n", "nil");
}
else
{
printf("%s\n", va_arg(list, char *));
}
va_end(list);
return;
}
va_start(list, n);
for (i = 0; i < (n - 1); i++)
{
if (va_arg(list, char *) == NULL)
{
printf("%s%s", "nil", separator);
}
else
{
printf("%s%s", va_arg(list, char *), separator);
}
}
if (va_arg(list, char *) == NULL)
{
printf("%s%s\n", "nil", separator);
}
else
{
printf("%s%s\n", va_arg(list, char *), separator);
}
}
