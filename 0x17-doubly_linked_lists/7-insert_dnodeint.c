#include "lists.h"
#include <stdlib.h>

/**
 * insert - add node in begin
 *
 * @h: parameter
 * @n: parameter
 * Return: dlistint_t*
 */
dlistint_t *insert(dlistint_t **h, int n)
{
dlistint_t *current, *new = malloc(sizeof(dlistint_t));
current = *h;
if (new == NULL)
{
return (NULL);
}
new->n = n;
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
        return insert(h, n);
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
                    current->next->prev = new;
                    current->next = new;
                    new->prev = current;
                    return (new);
                }
                current = current->next;
            }
            if (s + 1 == idx)
            {
                new->next = NULL;
                new->prev = current;
                current->next = new;
                return (new);
            }
        }
        return (NULL);
    }
}
