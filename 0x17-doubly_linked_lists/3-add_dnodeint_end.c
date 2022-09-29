#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add new node in the end of the lists
 *
 * @head: header the lists
 * @n: new node data
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t)), *current;
int i;
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
current = *head;
for (i = 0; current->next != NULL; i++)
{
current = current->next;
}
current->next = new;
new->prev = current;
return (new);
}
