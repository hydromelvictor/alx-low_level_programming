#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: parameter
 * @size: parameter
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *p;
char *str;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
str = p;
for (i = 0; i < nmemb * size; i++)
{
str[i] = '\0';
}
return (str);
}
