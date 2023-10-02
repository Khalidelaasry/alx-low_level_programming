#include "main.h"
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the input string
 *
 * Description: This function converts a string to an integer, taking into
 * account positive and negative signs. It stops the conversion when a
 * non-digit character is encountered.
 *
 * Return: The converted integer.
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
