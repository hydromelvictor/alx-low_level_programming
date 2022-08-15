#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
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