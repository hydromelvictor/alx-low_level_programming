#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 *
 * @head: parameter
 */
void free_listint2(listint_t **head)
{
listint_t *nbre = malloc(sizeof(listint_t));
if (nbre == NULL)
{
return;
}
nbre = *head;
if (nbre != NULL)
{
if (nbre->next != NULL)
{
free_listint2(head);
}
free(nbre);
head = NULL;
}
return (head);
}