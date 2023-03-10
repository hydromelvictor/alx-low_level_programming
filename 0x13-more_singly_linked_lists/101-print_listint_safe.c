#include "lists.h"
/**
 * print_listint_safe - print lists
 * @head: parameter
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
if (head == NULL)
{
exit(98);
}
while (head != NULL)
{
count++;
printf("[%d] %d", &head->n, head->n);
head = head->next;
}
return (count);
}
