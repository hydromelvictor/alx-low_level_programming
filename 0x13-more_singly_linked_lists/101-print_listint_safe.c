#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
listint_t *nbre = malloc(sizeof(listint_t));
if (head == NULL)
{
exit(98);
}
*nbre = *head;
while (nbre)
{
printf("%d\n", nbre->n);
count++;
nbre = nbre->next;
}
return (count);
}