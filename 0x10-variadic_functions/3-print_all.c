#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * entier - function
 *
 * @list: parameter
 */
void entier(va_list list)
{
printf("%d", va_arg(list, int));
}
/**
 * variant - function
 *
 * @list: parameter
 */
void variant(va_list list)
{
printf("%f", va_arg(list, float));
}
/**
 * word - function
 *
 * @list: parameter
 */
void word(va_list list)
{
printf("%s", va_arg(list, char *));
}
/**
 * print_all - print anything
 *
 * @format: parameter
 * 
 */
void print_all(const char * const format, ...)
{
va_list list;
int i = 0;
if (format == NULL)
{
printf("\n");
return;
}
va_start(list, format);
void (*show[])(va_list) = {entier, variant, word};
while (format[i] != '\0')
{
if (format[i] == 'c' || format[i] == 's')
{
(*show[2])(list);
if (format[i + 1] != '\0')
{
printf(", ");
}
}
if (format[i] == 'i')
{
(*show[0])(list);
if (format[i + 1] != '\0')
{
printf(", ");
}
}
if (format[i] == 'f')
{
(*show[1])(list);
if (format[i + 1] != '\0')
{
printf(", ");
}
}
i++;
}
printf("\n");
}