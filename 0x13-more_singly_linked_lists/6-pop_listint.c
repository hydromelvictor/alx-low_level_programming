#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 *
 * @head: parameter
 * Return: int
 */
int pop_listint(listint_t **head)
{
listint_t *rep = malloc(sizeof(listint_t));

if (head == NULL)
{
return (0);
}
rep = *head;
*head = rep->next;
return (rep->n);
}
