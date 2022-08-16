#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 *
 * @head: parameter
 * @index: parameter
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *del = malloc(sizeof(listint_t)), *start = malloc(sizeof(listint_t));
if (del == NULL || start == NULL)
{
return (-1);
}
start = *head;
while (start != NULL)
{
i++;
if (i == index)
{
del = start->next;
free(del);
start->next = start->next->next;
return (1);
}
start = start->next;
}
return (-1);
}
