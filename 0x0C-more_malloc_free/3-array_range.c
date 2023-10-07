#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers from min to max (inclusive).
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array.
 *         NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
