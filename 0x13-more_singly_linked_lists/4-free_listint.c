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
up = head;
head = head->next;
while (head)
{
up->next == NULL;
free(up);
head = head->next;
up = head;
}
}
