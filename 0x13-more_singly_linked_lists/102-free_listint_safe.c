#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
listint_t *del;
size_t n = 0;
if (h == NULL || *h == NULL)
return (0);
del = *h;
while (*h != NULL)
{
    n++;
    *h = (*h)->next;
    free(del);
    del = *h;
}
return (n);
}