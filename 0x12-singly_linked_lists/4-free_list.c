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
if (cur == NULL || head == NULL)
{
return;
}
cur = head;
while(head)
{
while (cur!=NULL)
{
    cur = cur->next;
}
free(cur);
cur = head;
}
}
