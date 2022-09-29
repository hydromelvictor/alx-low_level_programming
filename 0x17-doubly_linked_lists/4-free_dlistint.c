#include "lists.h"

/**
 * free_dlistint - free the lists
 *
 * @head: header the lists
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
while (head->next != NULL)
{
    current = head;
    free(current);
    head = head->next;
}
free(head);
}
