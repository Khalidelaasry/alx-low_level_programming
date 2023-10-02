#include "main.h"
/**
 * _strchr - Locates a character in a string
 *
 * @s: Pointer to the string
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of `c` in `s`, or NULL if not found
 *
 * Description: This function scans the string `s` for the first occurrence of
 * the character `c`. The terminating null character is considered part of the
 * string. If `c` is found, it returns a pointer to the first occurrence; if
 * `c` is not found, it returns NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
