#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string.
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
