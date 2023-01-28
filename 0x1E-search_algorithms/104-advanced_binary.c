#include "search_algos.h"

/**
  * _recursive - Searches recursively
  * @array: A pointer
  * @left: The starting
  * @right: The ending
  * @value: The value to search for
  * Return: Integer
  */
int _recursive(int *array, size_t left, size_t right,
int value)
{
size_t i;
if (right < left)
return (-1);
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);

printf("%d\n", array[i]);

i = left + (right - left) / 2;
if (array[i] == value && (i == left ||
array[i - 1] != value))
return (i);
if (array[i] >= value)
return (advanced_binary_recursive(array, left,
i, value));

return (advanced_binary_recursive(array, i + 1,
right, value));
}

/**
  * advanced_binary - Searches for a value
  * @array: A pointer
  * @size: The number
  * @value: The value to search for
  * Return: Integer
  */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (_recursive(array, 0, size - 1, value));
}
