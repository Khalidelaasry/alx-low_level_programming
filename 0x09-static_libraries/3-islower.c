#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if 'c' is lowercase, 0 otherwise
 *
 * Description: This function takes a character 'c' as input and checks if it
 *              is a lowercase letter in the English alphabet. It returns 1 if
 *              'c' is lowercase, and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
