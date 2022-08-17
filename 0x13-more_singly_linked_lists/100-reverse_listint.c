#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
listint_t *current = *head, *prev = current->next;
if (head == NULL)
{
return (NULL);
}
if (prev == NULL)
{
return (head);
}
prev->next = reverse_listint(prev);
current->next = NULL;
return (head);
}

