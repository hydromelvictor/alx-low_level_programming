#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: header
 * @index: index
 * Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int n;
if (head != NULL)
{
for (n = 0; head != NULL; n++)
{
if (n == index)
{
return (head);
}
head = head->next;
}
}
return (NULL);
}
