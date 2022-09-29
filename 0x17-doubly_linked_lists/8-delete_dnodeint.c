#include "lists.h"

/**
 * delete - delete
 *
 * @head: parameter
 * Return: int
 */
int delete(dlistint_t **head)
{
dlistint_t *current = *head;
*head = current->next;
if (current->next != NULL)
{
current->next->prev = NULL;
}
free(current);
return (1);
}

/**
 * delete_dnodeint_at_index - delete in index
 *
 * @head: parameter
 * @index: parameter
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;
    if (*head == NULL)
    {
        return (-1);
    }
    if (index == 0)
    {
        return (delete(head));
    }
    for (i = 0; current->next != NULL; i++)
    {
        if (i == index)
        {
            current->prev->next = current->next;
            if (current->next != NULL)
            {
                current->next->prev = current->prev;
            }
            free(current);
            return (1);
        }
        current = current->next;
    }
    if (i + 1 == index)
    {
        current->prev->next = NULL;
        free(current);
        return (1);
    }
    return (-1);
}
