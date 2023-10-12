#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: to search for the int.
 * @size: of the array.
 * @cmp: pointer function to compare the ints.
 * Return: index of element, -1 if no element matched.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int j = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && size > 0 && cmp != NULL)
	{
		while (i < size)
		{
			j = cmp(array[i]);
			if (j != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
