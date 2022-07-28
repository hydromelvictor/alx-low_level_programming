#include  <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"
/**
 * min - minimum
 * @a: parameter
 * @b: parameter
 * Return: unsigned int
 */
unsigned int min(unsigned int a, unsigned int b)
{
if (a > b)
{
return (b);
}
else
{
return (a);
}
}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int size, i;
void *tab;
char *str, *s;
if (ptr == NULL)
{
tab = malloc(new_size);
return (tab);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
tab = malloc(new_size);
str = tab;
size = min(old_size, new_size);
s = ptr;
if (new_size > old_size)
{
for (i = 0; i <= old_size; i++)
{
str[i] = s[i];
}
return (str);
}
else
{
for (i = 0; i <= size; i++)
{
str[i] = s[i];
}
return (str);
}
if (new_size == old_size)
{
return (ptr);
}
}
