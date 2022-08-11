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
start = *head;
while (start)
{
start = start->next;
}
if (str == NULL)
strcpy(end->str, "(nil)");
else
{
end->str = strdup(str);
}
end->len = strlen(str);
start->next = end;
end->next = NULL;
return (end);
}
