#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements
 * in a linked listint_t list
 *
 * @h: parameter
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
listint_t *nbre = malloc(sizeof(listint_t));
if (h == NULL)
{
return (count);
}
while (nbre)
{
count++;
nbre = nbre->next;
}
return (count);
}
