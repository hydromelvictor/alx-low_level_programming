#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
listint_t *next = head, *prev = next->next;

while(prev != NULL)
{
head = prev;
prev->next = next;
next->next = head;
}
return (head);
}
