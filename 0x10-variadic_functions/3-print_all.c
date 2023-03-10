#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - print anything 
 * @format: parameter
 */
void print_all(const char * const format, ...)
{
va_list list;
int j = 0;
if (format == NULL)
{
printf("\n");
return;
}
va_start(list, format);
while (*(format + j) != '\0')
{

if (*format == 'c' || *format == 's')
{
printf("%s", va_arg(list, const char *));
if (*(format + j + 1) != '\0')
{
printf(", ");
}
}
if (*format == 'i')
{
printf("%d", va_arg(list, int));
if (*(format + j + 1) != '\0')
{
printf(", ");
}
}
if (*format == 'f')
{
printf("%f", (float) va_arg(list, double));
if (*(format + j + 1) != '\0')
{
printf(", ");
}
}
j++;
}
va_end(list);
printf("\n");
}
