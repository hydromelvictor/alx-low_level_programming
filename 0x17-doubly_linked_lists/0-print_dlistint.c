#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlinstint - print of the list
 *
 * @h: constant header the double list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
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
        printf("%d\n", current->n);
        current = current->next;
    }
    free(current);
    return (n);
}
