#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - funnctions reverse
 *
 * head: parameter
 * Return: listint_t*
 */
listint_t *reverse_listint(listint_t **head)
{
if (*head != NULL)
{
if ((**head).next == NULL)
{
return (*head)
}
}
return (*head);
}
