#include "main.h"
/**
 * print_number - Prints an integer to the standard output
 *
 * @n: The integer to be printed
 *
 * Description: This recursive function prints an int to the standard output.
 * If the integer is negative,it appends a'-'sign before printing the absolute
 * value. It recursively breaks down the number and prints its digits.
 */
void print_number(int n)
{
	unsigned int i;

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
