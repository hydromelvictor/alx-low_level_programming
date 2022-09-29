#include "lists.h"

/**
 * free_dlistint - free the lists
 *
 * @head: header the lists
 */
void free_dlistint(dlistint_t *head)
{
if (head->next != NULL)
{
    free_dlistint(head->next);
}
free(head);
}
