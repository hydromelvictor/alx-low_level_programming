#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: parameter
 * @n: parameter
 * Return: listint_t*
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNbre = malloc(sizeof(listint_t));
if (newNbre == NULL || head == NULL)
{
return (NULL);
}
newNbre->n = n;
newNbre->next = *head;
*head = newNbre;
return (newNbre);
}