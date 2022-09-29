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
    for (s = 0; current != NULL; s++)
    {
        if (idx == 0)
        {
            new->next = current;
            new->prev = NULL;
            *h = new;
            return (new);
        }
        if (s + 1 == idx)
        {
            new->next = current->next;
            current->next = new;
            new->prev = current;
            return (new);
        }
        current = current->next;
    }
    if (idx == 0)
    {
        new->next = NULL;
        new->prev = NULL;
        *h = new;
    }
    return (NULL);







/*

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
            for (s = 0; current != NULL; s++)
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
        }
        return (NULL);
    }
    */
}
