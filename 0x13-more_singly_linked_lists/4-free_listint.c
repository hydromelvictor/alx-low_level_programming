#include "lists.h"
#include <stddef.h>
/**
 * free_listint - frees a listint_t list
 *
 * @head: parameter
 */
void free_listint(listint_t *head)
{
listint_t *avaible = malloc(sizeof(listint_t));
if (avaible == NULL)
{

return;
}
avaible = head;
if (head != NULL)
{
if (head->next != NULL)
{
avaible = head->next;
free_listint(avaible);
}
free(head);
}
}
