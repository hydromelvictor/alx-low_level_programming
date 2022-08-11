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
if (head == NULL)
{
return;
}
while (head)
{
free(head->str);
free(head);
head = head->next;
}
}
