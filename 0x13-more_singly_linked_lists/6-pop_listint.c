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
int i = 0;
listint_t *rep = malloc(sizeof(listint_t));
if (rep == NULL || head == NULL)
{
return (i);
}
rep = *head;
i = rep->n;
*head = (rep->next != NULL) ? rep->next : NULL;
free(rep);
return (i);
}
