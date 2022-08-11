#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include <string.h>
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 *
 * @head: struct parent
 * @str: parameter char
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
if (str == NULL)
{
strcpy(new->str, "(nil)");
}
else
{
new->str = strdup(str);
}
new->len = strlen(str);
new->next = *head;
*head = new;
return (new);
}
