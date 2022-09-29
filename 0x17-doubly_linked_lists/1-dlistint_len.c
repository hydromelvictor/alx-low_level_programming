#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * dlistint_len - length for lists
 *
 * @h: header of lists
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
    dlistint_t *current = malloc(sizeof(dlistint_t));
    size_t n;
    if (current == NULL || h == NULL)
    {
        free(current);
        return (0);
    }
    *current = *h;
    for (n = 0; current != NULL; n++)
    {
        current = current->next;
    }
    free(current);
    return (n);
}
