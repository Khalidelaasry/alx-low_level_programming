#include "main.h"
/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to a string
 *
 * Des:This function takes a pointer to a string and reverses the characters
 * in the string.
 */
void	rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char t;

	while (s[i])
		i++;

	while (i > j)
	{
		t = s[--i];
		s[i] = s[j];
		s[j++] = t;
	}
}
