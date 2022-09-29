#include "lists.h"

/**
 * sum_dlistint - sum the lists data
 *
 * @head: parameter
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
int m = 0, n;
if (head != NULL)
{
for (n = 0; head != NULL; n++)
{
m += head->n;
head = head->next;
}
}
return (m);
}
