#include "main.h"

/**
 * palindrome - function to check palindrome.
 * @s: string to check.
 * @end: length of s.
 * Return: 1 if palindrome, else 0.
 */

int	palindrome(char *s, int end)
{
	if (end < 1)
		return (1);
	if (*s == *(s + end))
		return (palindrome(s + 1, end - 2));
	else
		return (0);
}

/**
 * _strlen - function to calculate s length.
 * @s: string.
 * Return: length of s.
 */

int	_strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - function that checks if s is palindrome.
 * @s: string to check.
 * Return: 1 if s is palindrome, else 0.
 */

int	is_palindrome(char *s)
{
	int	end;

	end = _strlen(s);
	return (palindrome(s, end - 1));
}
