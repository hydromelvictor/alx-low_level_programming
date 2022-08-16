#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position
 * 
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: listint_t* 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new = malloc(sizeof(listint_t));
listint_t *start = malloc(sizeof(listint_t));
unsigned int i = 0;
if (new == NULL || start == NULL || (idx > listint_len(head)))
{
return (NULL);
}
*start = **head;
new->n = n;
while(i < idx)
{
start = start->next;
i++;
}
new->next = start->next;
start->next = new;
return (new);
}