#include "main.h"
/**
 * puts2 - Prints every other character of a string followed by a newline
 *
 * @str: Pointer to a string
 *
 * Des:This function takes a pointer to a string and prints every other
 * character of the string followed by a newline character.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
