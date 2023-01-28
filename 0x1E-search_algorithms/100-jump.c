#include "search_algos.h"
#include <math.h>

/**
 * min - minimum
 * @a: integer
 * @b: integer
 * Return: integer (a or b)
*/
size_t min(size_t a, size_t b)
{
    return ((a >= b) ? a : b);
}

/**
 * jump_search - using the Jump search algorithm
 * @array: array
 * @size: size of array
 * @value: search value
 * Return: integer (array index or -1)
*/
int jump_search(int *array, size_t size, int value)
{
size_t a = 0, b = (size_t)sqrt(size);
if (array == NULL)
return (-1);
while (array[min(b, size) - 1] < value)
{
a = b;
b = b + (size_t)sqrt(size);
if (a > size)
return (-1);
printf("Value found between indexes [%d] and [%d]\n", a, min(b, size) - 1);
}

while (array[a] < value)
{
printf("Value checked array[%d] = [%d]\n", a, array[a]);
a = a + 1;
if (a == min(b, size))
return (-1);
}

if (array[a] == value)
{
printf("Value checked array[%d] = [%d]\n", a, array[a]);
return (a);
}
else
return (-1);
}
