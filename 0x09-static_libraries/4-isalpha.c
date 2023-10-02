#include "main.h"
/**
 * _isalpha - Checks if a character is an alphabet letter
 *
 * @c: The character to be checked
 *
 * Return: 1 if 'c' is an alphabet letter, 0 otherwise
 *
 * Description: This function takes a character 'c' as input and checks if it
 * is a letter in the English alphabet (either lowercase or uppercase).
 * It returns 1 if 'c' is an alphabet letter, and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	return (0);
}
