#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *endNbre = malloc(sizeof(listint_t));
listint_t *start = malloc(sizeof(listint_t));
if (endNbre == NULL || start == NULL || head == NULL)
{
return (NULL);
}

endNbre->n = n;
endNbre->next = NULL;
start = *head;
while(start)
{
start = start->next;
}
start->next = endNbre;
return (endNbre);
}
