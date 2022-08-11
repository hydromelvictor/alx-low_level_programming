#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: parameter
 * Return:  size_t
 */
size_t print_list(const list_t *h)
{
int i = 0;
size_t count = 0;
while (h != NULL)
{
_putchar('[');
if (h->str == NULL)
{
_putchar('0');
}
else
{
number(h->len);
}
_putchar(']');
_putchar(32);
if (h->str == NULL)
{
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
}
else
{
while (h->str[i])
{
_putchar(h->str[i]);
i++;
}
}
if (h != NULL)
{
_putchar(10);
}
h = h->next;
count++;
}
return (count);
}
