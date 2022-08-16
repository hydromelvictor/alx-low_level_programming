#include "lists.h"
/**
 * get_nodeint_at_index - Get the nodeint at index object
 *
 * @head: parameter
 * @index: parameter
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t count = listint_len(head);
unsigned int i = 0;
if (index > count || head == NULL)
{
return (NULL);
}
while (i <= index)
{
head = head->next;
i++;
}
return (head);
}
