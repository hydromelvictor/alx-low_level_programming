#include "lists.h"

/**
 * delete_dnodeint_at_index - delete in index
 *
 * @head: parameter
 * @index: parameter
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head, *start;
    unsigned int i;
    if (*head == NULL)
    {
        return (-1);
    }
    if (index == 0)
    {
        *head = current->next;
        free(current);
        current = *head;
        current->prev = NULL;
        return (1);
    }
    return (-1);
}
