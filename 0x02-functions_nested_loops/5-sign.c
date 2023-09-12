#include <unistd.h>
#include "main.h"
/*
 * print_sign - Prints the sign of a number
 *
 * @n: The number to check
 *
 * Return: 1 if 'n' is positive, -1 if 'n' is negative, 0 if 'n' is zero
 *
 * Description: This function takes an integer 'n' as input and checks its sign.
 *              It then prints the sign ('+', '-' or '0') using _putchar, and
 *              returns 1 if 'n' is positive, -1 if 'n' is negative, and 0 if 'n' is zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
