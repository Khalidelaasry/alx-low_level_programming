#include "main.h"
/**
 * leet - Encodes a string into 'leet' speak
 *
 * @c: Pointer to the input string
 *
 * Return: Pointer to the modified string
 *
 * Description: This function replaces certain characters in a string
 * with their 'leet' speak equivalents. It iterates through the input
 * string and replaces occurrences of 'a', 'A', 'e', 'E', 'o', 'O',
 * 't', 'T', 'l', and 'L' with '4', '4', '3', '3', '0', '0', '7', '7',
 * '1', and '1' respectively. It then returns the modified string.
 */
char *leet(char *c)
{
	int i;
	int j;

	char chars[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";

	i = 0;
	while (c[i])
	{
		j = 0;
		while (replacements[j])
		{
			if (c[i] == chars[j])
				c[i] = replacements[j];
			j++;
		}
		i++;
	}
	return (c);
}
