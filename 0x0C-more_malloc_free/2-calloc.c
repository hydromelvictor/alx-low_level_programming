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
void *tab = malloc(nmemb * size);
if (tab == NULL)
{
return (NULL);
}
return (tab);
}
