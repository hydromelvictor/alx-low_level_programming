#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 *
 * @head: parameter
 */
void free_listint(listint_t *head)
{
listint_t *up = malloc(sizeof(listint_t));
if (up == NULL)
{
return;
}
if(head->next == NULL)
{
free(head->n);
free(head);
}
else
{
while (head->next != NULL)
{
up = head;
free(up->n);
free(up);
head = head->next;
}
}
}
