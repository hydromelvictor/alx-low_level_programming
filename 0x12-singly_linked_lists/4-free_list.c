#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * free_list - frees a list_t list.
 *
 * @head: parameter
 */
void free_list(list_t *head)
{
list_t *current = malloc(sizeof(list_t));
if (current == NULL)
{
return;
}
if (head  == NULL)
{
return;
}
current = head;
while (head->next != NULL)
{
head = head->next;
free(current);
current = head;
}
}
