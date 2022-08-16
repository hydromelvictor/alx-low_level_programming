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
listint_t *del = malloc(sizeof(listint_t));
if (del == NULL || head == NULL)
{
return;
}
*del = *head;
while (del != NULL)
{
free(&head->n);
free(head);
head = del;
del = del->next;
}
free(&head->n);
free(head);
free(&del->n);
free(del);
}
