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
if (head == NULL)
{
return;
}
while (head->next != NULL)
{
free(&head->n);
free(head);
head = head->next;
}
free(&head->n);
free(head);
}

