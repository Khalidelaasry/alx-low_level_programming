#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: If new_size == old_size, returns ptr (no changes needed).
 *         If new_size == 0 and ptr is not NULL, returns NULL and frees ptr.
 *         If ptr is NULL, it is equivalent to malloc(new_size) and returns
 *         a pointer to the newly allocated memory.
 *         Otherwise, returns a pointer to the reallocated memory,
 *         which may be either the same as ptr or a new location.
 *         If memory allocation fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
