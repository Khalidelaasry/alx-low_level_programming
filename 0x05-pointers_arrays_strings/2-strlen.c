#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string.
 * Return: string length.
 */

int	_strlen(char *s)
{
	char	*a = s;

	while (*a)
		++a;
	return (a - s);
}
