#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: parameter
 * @size_t: parameter
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    listint_t *nbre = malloc(sizeof(listint_t));
    {
        /* code */
    }
    
    if (h == NULL)
    {
        return (count);
    }
    *nbre = *h;
    while (nbre)
    {
        printf("%d\n", nbre->n);
        count++;
        nbre = nbre->next;
    }
    return (count);
}