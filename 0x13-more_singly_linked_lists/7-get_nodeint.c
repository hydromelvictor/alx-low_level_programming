#include "lists.h"
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
if (head == NULL)
{
return (NULL);
}
while (i <= index)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
i++;
}
return (head);
}
