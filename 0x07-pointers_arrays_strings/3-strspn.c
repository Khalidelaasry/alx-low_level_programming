#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Pointer to the string to be scanned
 * @accept: Pointer to the string containing characters to match
 *
 * Return: Number of bytes in the initial segment of `s` which consist only of
 * characters from `accept`
 *
 * Desc:This function calculates the length of the initial segment of
 * `s` which consists entirely of char from the string `accept`. It
 * returns the number of char in `s` that are in `accept` before the first
 * occurrence of any character not in `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		for (; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
