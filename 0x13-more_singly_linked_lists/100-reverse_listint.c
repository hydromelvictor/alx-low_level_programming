#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
listint_t *next = NULL, *prev = head;
while(prev != NULL)
{
head = prev->next;
prev->next = next;
next = head;
prev = next->next;
}
return (head);
}
