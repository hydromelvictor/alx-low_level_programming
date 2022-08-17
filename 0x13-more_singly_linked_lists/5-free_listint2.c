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
if (head == NULL)
{
head = NULL;
}
else
{
nbre = *head;
if (nbre->next != NULL)
{
free_listint2(&nbre->next);
}
free(nbre);
}
}
