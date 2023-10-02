#include "main.h"
/**
 * _strstr -Locates the first occurrence of the substring`needle` in`haystack`
 *
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the beginning of the located substring in `haystack`,
 *         or NULL if the substring is not found
 *
 * Desc:This function searches the string `haystack` for the first
 * occurrence of the substring `needle`. It returns a pointer to the beginning
 * of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return (0);
}
