#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
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
start = *head;
while (start->next != NULL)
{
start = start->next;
}
end->str = strdup(str);
end->len = strlen(str);
end->next = NULL;
start->next = end;
free(start);
return (end);
}
