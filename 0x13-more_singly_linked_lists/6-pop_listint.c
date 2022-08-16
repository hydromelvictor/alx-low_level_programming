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
listint_t *del = malloc(sizeof(listint_t));
int n;
if (rep == NULL || head == NULL)
{
return (0);
}
*rep = **head;
del = *head;
if (rep->next != NULL)
{
*head = rep->next;
}
else
{
*head = NULL;
}
return (del->n);
}
