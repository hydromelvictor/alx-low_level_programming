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
list_t *cur = malloc(sizeof(list_t));
if (cur == NULL)
{
return;
}
cur = NULL;
while (head != NULL)
{
cur = head->next;
free(head);
head = cur;
}
}
