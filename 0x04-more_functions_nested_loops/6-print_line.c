#include "main.h"
/**
 * print_line - Prints a line of underscores
 *
 * @n: The number of underscores to print
 *
 * Description: This function prints a line consisting of 'n' underscores.
 * If 'n' is less than or equal to zero, it simply prints a newline.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
