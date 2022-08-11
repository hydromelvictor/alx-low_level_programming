#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: struct
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h->next != NULL)
{
count++;
}
return (count);
}
