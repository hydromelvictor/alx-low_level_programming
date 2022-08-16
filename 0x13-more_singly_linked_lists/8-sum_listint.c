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
head = head->next;
sum++;
}
return (sum);
}
}