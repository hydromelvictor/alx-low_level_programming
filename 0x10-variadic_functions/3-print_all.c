#include "variadic_functions.h"

/**
 * print_char - printer the character
 * @list: variadic list
*/
void print_char(va_list list)
{
char c;
c = va_arg(list, int);
printf("%c", c);
}

/**
 * print_int - printer the interger
 * @list: variadic list
*/
void print_int(va_list list)
{
int n;
n = va_arg(list, int);
printf("%d", n);
}

/**
 * print_float - printer
 * @list: variadic list
*/
void print_float(va_list list)
{
float f;
f = (float) va_arg(list, double);
printf("%f", f);
}

/**
 * print_str - printer
 * @list: variadic list
*/
void print_str(va_list list)
{
char *str;
str = va_arg(list, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}


/**
 * print_all - print anything
 * @format: parameter
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *separator = "";
printer_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_str}
};

va_start(args, format);
while (format && (*(format + i)))
{
j = 0;
while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(args);
separator = ", ";
}
i++;
}
printf("\n");
va_end(args);
}
