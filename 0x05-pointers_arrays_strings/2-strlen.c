#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
