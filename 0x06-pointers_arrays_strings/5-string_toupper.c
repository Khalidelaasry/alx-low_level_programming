#include "main.h"
/**
 * string_toupper - Converts lowercase letters in a string to uppercase
 *
 * @c: Pointer to the input string
 *
 * Return: Pointer to the modified string
 *
 * Description:This function iterates through a string and converts any
 * lowercase letters to uppercase.
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
