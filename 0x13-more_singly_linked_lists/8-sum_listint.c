#include "lists.h"
int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (0);
}
else
{
while (head != NULL)
{
sum++;
}
return (sum);
}
}