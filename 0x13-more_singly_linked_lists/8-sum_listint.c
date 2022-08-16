#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 *
 * @head: parameter
 * Return: int
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (sum);
}
else
{
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
}
