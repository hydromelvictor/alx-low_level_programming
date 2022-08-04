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
printf("%s%s", "nil", separator);
}
else
{
printf("%s%s\n", va_arg(list, char *), separator);
}
}
