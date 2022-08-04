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
if (n == 0)
{
    printf("\n");
return;
}
va_start(list, n);
if (separator == NULL)
{
printf("\n");
return;
}
for (i = 0; i < n - 1; i++)
{
printf("%d%s ", va_arg(list, unsigned int), separator);
}
printf("%d\n", va_arg(list, unsigned int));
}
