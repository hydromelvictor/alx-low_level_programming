#include "lists.h"
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