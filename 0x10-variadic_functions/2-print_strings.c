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
if (n == 0 || str == NULL)
{
printf("\n");
return;
}
if (separator == NULL)
{
for(i = 0; i < (n - 1); i++)
{
str = va_arg(list, char *);
if (str == NULL)
{
printf("%s\n", "nil");
}
else
{
printf("%s\n", str);
}
}
str = va_arg(list, char *);
if (str == NULL)
{
printf("%s\n", "nil");
}
else
{
printf("%s\n", str);
}
return;
}
va_start(list, n);
for (i = 0; i < (n - 1); i++)
{
str = va_arg(list, char *);
if (str == NULL)
{
printf("%s%s", "nil", separator);
}
else
{
printf("%s%s", str, separator);
}
}
str = va_arg(list, char *);
if (str == NULL)
{
printf("%s\n", "nil");
}
else
{
printf("%s\n", str);
}
}
