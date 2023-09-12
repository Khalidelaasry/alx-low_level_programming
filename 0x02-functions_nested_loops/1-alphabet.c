#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - function that prints the alphabet,
 * in lowercase using _putchar.
 *
 * Return: void
*/
void print_alphabet(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
