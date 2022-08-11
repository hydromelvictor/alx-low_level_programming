#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include <stddef.h>
/**
 * show - print
 *
 */
void show(void)
{
_putchar('[');
_putchar(0 + '0');
_putchar(']');
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
}
/**
 * jet - print
 *
 * @p: parameter
 */
void jet(list_t *p)
{
_putchar('[');
number(p->len);
_putchar(']');
while (*p->str)
{
_putchar(*p->str);
p->str++;
}
}
/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: parameter
 * Return:  size_t
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
list_t *start = malloc(sizeof(list_t));
if (start == NULL)
{
return (count);
}
if (h == NULL)
{
return (count);
}
*start = *h;
while (start != NULL)
{
if (start->str == NULL)
{
show();
}
else
{
jet(start);
}
_putchar(10);
count++;
start = start->next;
}
free(start);
return (count);
}
