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
while (h->next != NULL)
{
_putchar('[');
number(h->len);
_putchar(']');
_putchar(32);
while (h->str[i] != '\0')
{
_putchar(h->str[i]);
i++;
}
if (h->next != NULL)
{
_putchar(10);
}
count++;
}
return (count);
}
