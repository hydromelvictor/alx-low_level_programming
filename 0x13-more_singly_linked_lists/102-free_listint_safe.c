#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
listint_t *del;
if (h == NULL || *h == NULL)
return;
del = *h;
while (*h != NULL)
{
    *h = (*h)->next;
    free(del);
    del = *h;
}
}