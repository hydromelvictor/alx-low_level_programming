#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning
 * of a listint_t list
 *
 * @head: parameter
 * @n: parameter
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *endNbre = malloc(sizeof(listint_t));
listint_t *start = malloc(sizeof(listint_t));
if (endNbre == NULL || start == NULL)
{
return (NULL);
}
endNbre->n = n;
endNbre->next = NULL;
if (*head == NULL)
{
*head = endNbre;
}
start = *head;
while (start->next != NULL)
{
start = start->next;
}
start->next = endNbre;
return (endNbre);
}
