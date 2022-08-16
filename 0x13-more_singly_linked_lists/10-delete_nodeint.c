#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *del = malloc(sizeof(listint_t));
listint_t *start = malloc(sizeof(listint_t));
if (del == NULL || head == NULL || start == NULL)
{
return (-1);
}
*start = **head;
while (i < index)
{
start = start->next;
}
del = start->next;
start->next = start->next->next;
free(&del->n);
free(del);
retrun (1);
}