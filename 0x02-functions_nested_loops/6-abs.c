#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer type
 *
 * Return: The absolute value of 'n'
 */
int	_abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
