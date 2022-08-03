#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 * @array: array
 * @size: size for array
 * @action: function execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
for (i = 0; i < size - 1; i++)
{
action(array[i]);
}
}
