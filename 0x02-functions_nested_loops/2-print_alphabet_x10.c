#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase English alphabet 10 times
 *
 * Description: This function prints the lowercase English alphabet 10 times,
 * with each set of characters separated by a newline. It uses nested
 * loops and the write function to achieve this.
 */
void print_alphabet_x10(void)
{
	int c, n;

	n = 0;

	while (n < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
