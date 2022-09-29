#include "lists.h"

/**
 * free_dlistint - free the lists
 *
 * @head: header the lists
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
while (current != NULL)
{
current = head->next;
free(head);
head = current;
}
}
