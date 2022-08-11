#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: parameter
 * Return:  size_t
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
list_t *cur = malloc(sizeof(list_t));
if (cur == NULL || h == NULL)
{
return (count);
}
*cur = *h;
while (cur->next)
{
if (cur->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("[%d] %s\n", cur->len, cur->str);
}
count++;
cur = cur->next;
}
return (count);
}
