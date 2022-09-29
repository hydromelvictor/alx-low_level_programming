#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add the new node
 *
 * @head: lists header
 * @n: new node data
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t)), *current;
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = NULL;
if (*head == NULL)
{
new->next = NULL;
*head = new;
return (new);
}
current = *head;
current->prev = new;
new->next = current;
*head = new;
return (*head);
}
