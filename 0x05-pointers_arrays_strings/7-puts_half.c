#include "main.h"
/**
 * puts_half - Prints the second half of a string followed by a newline
 *
 * @str: Pointer to a string
 *
 * Des:This function takes a pointer to a string and prints the second
 * half of the string followed by a newline character.
 */
void	puts_half(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i])
		i++;
	n = (i % 2 == 0) ? i / 2 : (i + 1) / 2;
	while (str[n])
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
