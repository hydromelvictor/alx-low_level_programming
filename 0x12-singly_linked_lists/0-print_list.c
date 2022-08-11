#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
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
void jet(const list_t *p)
{
int i = 0;
_putchar('[');
_putchar(p->len + '0');
_putchar(']');
while (p->str[i] != '\0')
{
_putchar(p->str[i]);
i++;
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
if (h == NULL)
{
return (count);
}

while (h != NULL)
{
if (h->str == NULL)
{
show();
}
else
{
jet(h);
}
_putchar(10);
count++;
h = h->next;
}
return (count);
}
