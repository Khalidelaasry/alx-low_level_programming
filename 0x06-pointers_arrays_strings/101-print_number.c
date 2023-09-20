#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: number to print.
 * Return: nothing.
 */

void	print_number(int n)
{
	unsigned int	i;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i *= -1;
	}
	if (i / 10)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
