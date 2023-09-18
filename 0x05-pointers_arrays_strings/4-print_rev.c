#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line.
 * @s: string to reverse.
 */

void	print_rev(char	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i--)
		putchar(s[i]);
	putchar('\n');
}
