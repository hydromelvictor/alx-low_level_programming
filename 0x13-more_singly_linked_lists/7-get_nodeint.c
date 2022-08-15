#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t count = listint_len(head);
unsigned int i = 0;
if (index > count)
{
return (NULL);
}
else
{
while (i != index)
{
head = head->next;
i++;
}
return (head);
}
}
