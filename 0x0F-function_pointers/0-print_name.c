#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: parameter
 * @f: function is an parameter
 */
void print_name(char *name, void (*f)(char *))
{
if(name != NULL)
f(name);
}
