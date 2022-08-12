#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: parameter
 * @str: parameter
 * Return: list_t*
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *end = malloc(sizeof(list_t)), *start = malloc(sizeof(list_t));
if (end == NULL || start == NULL)
{
return (NULL);
}
end->str = (str == NULL) ? strdup("(nil)") : strdup(str);
end->len = (str == NULL) ? 0 : strlen(str);
if (head == NULL)
{
end->next = *head;
*head = end;
}
else
{
start = *head;
do
{
start = start->next;
}while (start->next != NULL);
start->next = end;
end->next = NULL;
}
return (end);
}
