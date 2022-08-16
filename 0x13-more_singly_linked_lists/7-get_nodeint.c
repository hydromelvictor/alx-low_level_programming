#include "lists.h"
#include <stddef.h>
/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: parameter
 * @index: parameter
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{;
unsigned int i = 0;
while (head != NULL)
{
i++;
if (i == index + 1)
{
return (head);
}
head = head->next;
}
return (NULL);
}
