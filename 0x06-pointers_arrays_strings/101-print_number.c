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
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
