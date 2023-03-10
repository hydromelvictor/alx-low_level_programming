#ifndef _VARIADIC_FUNC_H
#define _VARIADIC_FUNC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printer
 * @symbol: character
 * @print: void
*/
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
