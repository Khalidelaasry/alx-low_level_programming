#include "main.h"
#include <stdlib.h>
/**
 * create_array -Creates an array of chars and initial it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the allocated memory containing the array,
 *         or NULL if the allocation fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;
	ptr = malloc(sizeof(char) * size);
	if ((ptr == NULL) || (size == 0))
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
