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
unsigned int i = 0;
listint_t *new = malloc(sizeof(listint_t)), *start = malloc(sizeof(listint_t));
if (new == NULL || start == NULL)
{
return (NULL);
}
start = *head;
new->n = n;
if (start != NULL)
{
if (idx == 0)
{
new->next = *head;
*head = new;
}
while (start->next != NULL)
{
i++;
if (i == idx)
{
new->next = start->next;
start->next = new;
}
start = start->next;
}
if (idx == i)
{

}
return (new);
}
return (NULL);
}
