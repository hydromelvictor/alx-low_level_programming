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
if (del == NULL)
{
return;
}
del = head;
while (del->next != NULL)
{
    free(del);
    del = del->next;
}
free(del);
}

