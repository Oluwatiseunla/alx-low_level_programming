#include "function_pointers.h"

/**
 * array_iterator - execute array
 * @array: an array
 * @size:size
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size, i++)
			action(array[i]);
	}
}
