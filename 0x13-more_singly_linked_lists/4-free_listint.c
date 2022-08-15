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
if (up == NULL || head == NULL)
{
return;
}
while (head)
{
up = head->next;
free(head);
head->next = NULL;
head = up;
}
}
