#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;
	if (l_digit < 0)
	{
		l_digit = -l_digit;
	}
	_putchar('0' + l_digit);
	return (l_digit);
}
