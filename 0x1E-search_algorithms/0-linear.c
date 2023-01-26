#include "search_algos.h"

/**
 * linear_search - searches for a value
 * @array: array
 * @size: array size
 * @value: search value
 * Return: integer (array index or -1)
 */
int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
return (-1);
    
for (i = 0; array[i] != '\0'; i++)
{
printf("Value checked array[%d] = [%d]", i, array[i]);
if (array[i] == value)
return (i);
}
printf("Found 999 at index: %d", -1);
return (-1);
}
