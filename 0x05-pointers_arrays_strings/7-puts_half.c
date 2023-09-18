#include "main.h"

/**
 * puts_half - function that prints half of a string.
 * @str: string to be printed.
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
