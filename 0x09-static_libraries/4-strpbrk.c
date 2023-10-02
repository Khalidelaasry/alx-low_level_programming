#include "main.h"
/**
 * _strpbrk - Locates the first occurrence of any char in `accept` within `s`
 *
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing characters to search for
 *
 * Return: Pointer to the first occurrence in `s` of any character in `accept`,
 *         or NULL if no such character is found
 *
 * Desc:This function searches the string `s` for any character that
 * matches a char in the string `accept`. It returns a pointer to the first
 * occurrence of such a character, or NULL if none is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
