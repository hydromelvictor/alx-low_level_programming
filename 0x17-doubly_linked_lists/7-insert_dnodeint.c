#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node in position
 *
 * @h: header
 * @idx: position
 * @n: node data
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *current, *new = malloc(sizeof(dlistint_t));
    unsigned int s;
    current = *h;
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    if (idx == 0)
    {
        if (*h == NULL)
        {
            new->next = NULL;
            new->prev = NULL;
            *h = new;
        }
        else
        {
            new->next = current;
            current->prev = new;
            new->prev = NULL;
            *h = new;
        }
        return (new);
    }
    else
    {
        if (*h != NULL)
        {
            for (s = 0; current->next != NULL; s++)
            {
                if (s + 1 == idx)
                {
                    new->next = current->next;
                    current->next = new;
                    new->prev = current;
                    return (new);
                }
                current = current->next;
            }
            if (s == idx)
            {
                new->next = NULL;
                current->next = new;
                new->prev = current;
                return (new);
            }
        }
        return (NULL);
    }
}
