#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int	_atoi(char *s)
{
	unsigned int	i = 0;
	int	j = 1;

	while (*s)
	{
		if (*s == '-')
			j *= -1;
		else if (*s >= '0' && *s <= '9')
			i = i * 10 + (*s - '0');
		else if (i > 0)
			break;
		s++;
	}
	return (i * j);
}
