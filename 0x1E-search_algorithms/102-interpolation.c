#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  * @array: A pointer to the first
  * @size: The number.
  * @value: The value to search for.
  *
  * Return: Integer
  */
int interpolation_search(int *array, size_t size, int value)
{
size_t pos, l, r;

if (array == NULL)
return (-1);

for (l = 0, r = size - 1; r >= l;)
{
pos = l + (((double)(r - l) / (array[r] - array[l]))
* (value - array[l]));
if (pos < size)
printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
else
{
printf("Value checked array[%ld] is out of range\n", pos);
break;
}

if (array[pos] == value)
return (pos);
if (array[pos] > value)
r = pos - 1;
else
l = pos + 1;
}

return (-1);
}
