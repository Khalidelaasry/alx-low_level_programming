#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function on array.
 * @array: array to work with.
 * @size: size of that array.
 * @action: function pointer.
 * Return nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
		while (i < size)
			action(array[i++]);
}
