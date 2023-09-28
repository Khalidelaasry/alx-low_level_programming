#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Pointer to the string to be printed
 *
 * This function prints the string `s` followed by a newline character.
 * It uses recursion to print each character of the string.
 * When the end of the string is reached (null terminator), it prints a newline
 * character and returns.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
