#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a newline
 *
 * @s: Pointer to a string
 *
 * Des: This function takes a pointer to a string and prints it in reverse
 * followed by a newline character.
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
